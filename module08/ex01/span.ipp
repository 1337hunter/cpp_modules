template <typename I>
void span::addNumber(I begin, I end)
{
	if (this->_mset.size() + std::distance(begin, end) > this->_maxSize)
		throw std::exception();
	this->_mset.insert(begin, end);
}
