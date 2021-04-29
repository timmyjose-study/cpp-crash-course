int main() {
  // pointer to a char
  char *p1 = new char;

  // constant pointer to a char
  char *const p2 = p1;

  // pointer to a constant char
  const char *p3;

  // constant pointer to a constant char
  const char *const p4 = p1;

  // reference to a char
  char& r1 = *p1;

  // reference to a constant char
  const char& r2 = *p3;

  return 0;
}

