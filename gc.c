void main() {
  dynamic v;
  dynamic w;
  v = cons(11, 22);
  setcar(v, 33);
  print car(v);
  print cdr(v);
}
