template <typename T, typename U>
auto	func(T t, U u) -> decltype((void)u, t)
// expression '(void)u, t' become 't' by comma operator
{
	return;
}
