#include <gtest/gtest.h>

#include "disemvowel.h"

char *charDise;

TEST(Disemvowel, HandleEmptyString) {
	charDise = disemvowel((char*) "");
	ASSERT_STREQ("", charDise);
	free(charDise);
}

TEST(Disemvowel, HandleNoVowels) {
	charDise = disemvowel((char*) "pqrst");
	ASSERT_STREQ("pqrst", charDise);
	free(charDise);
}

TEST(Disemvowel, HandleOnlyVowels) {
	charDise = disemvowel((char*) "aeiouAEIOUOIEAuoiea");
	ASSERT_STREQ("", charDise);
	free(charDise);
}

TEST(Disemvowel, HandleMorrisMinnesota) {
	charDise = disemvowel((char*) "Morris, Minnesota");
	ASSERT_STREQ("Mrrs, Mnnst", charDise);
	free(charDise);
}

TEST(Disemvowel, HandlePunctuation) {
	charDise = disemvowel((char*) "An (Unexplained) Elephant!");
	ASSERT_STREQ("n (nxplnd) lphnt!", charDise);
	free(charDise);
}

TEST(Disemvowel, HandleLongString) {
  char *str;
  int size;
  int i;

  size = 50000;
  str = (char*) calloc(size, sizeof(char));
  str[0] = 'x';
  str[1] = 'y';
  str[2] = 'z';
  for (i = 3; i < size-1; ++i) {
    str[i] = 'a';
  }
  str[size-1] = '\0';
  
  char *strDise = disemvowel(str);
  ASSERT_STREQ("xyz", strDise);

  free(str);
  free(strDise);
}

int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
