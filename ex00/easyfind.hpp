#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>


template <typename T>
int easyfind(T first, int second)
{
	std::<T>::iterator it = std::find(first.begin(), first.end(), second);

	if (*it)
		return *it;
	else
		throw std::exception();
}

#endif


/*
cpp 07을 평가했습니다. 서버가 터진관계로 먼저 코드설명을 진행했습니다. template에 대한 과제였고 정확히 template가 어떤 동작을 하는지 몰랐기에 설명을 요구드렸고 이해하기 쉽게 설명을 해주셨습니다. 또 과제에서 제시한 함수들 외에도 테스트 결과를 정확하게 보여주시기 위해서 추가적인 함수도 만들어주셨고, 사소한 부분에서 더 좋은 효율을 뽑아낼 수 있게 값을 복사받아서 사용하는게 아닌 참조해서 사용하는 부분이 인상깊었습니다. 아쉽게도 01부분에서 const로 들어오는 타입일 때 정상작동되지 않아서 01은 No를 드리지만 다음 평가떄는 꼭 통과하시길 바라겠습니다. 저도 곧 cpp를 진행할 예정인데 평가때 쉽게 설명해주셔서 많이 배워가는것 같습니다. 수고하셨습니다.
*/