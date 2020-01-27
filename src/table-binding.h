#ifndef TABLE_H
#define TABLE_H

#include "mruby.h"
#include "mruby/variable.h"

#include <stdint.h>
#include <vector>
#include <algorithm>

class Table
{
public:
	Table(int x, int y = 1, int z = 1);
	Table(const Table& other);
	~Table() { return; }

	int xSize() const { return xs; }
	int ySize() const { return ys; }
	int zSize() const { return zs; }
	
	int16_t get(int x, int y = 0, int z = 0) const;
	void set(int16_t value, int x, int y = 0, int z = 0);
	
	void resize(int x, int y, int z);
	void resize(int x, int y);
	void resize(int x);

	inline int16_t& at(int x, int y = 0, int z = 0)
	{
		return data[xs * ys * z + xs * y + x];
	}

	inline const int16_t& at(int x, int y = 0, int z = 0) const
	{
		return data[xs * ys * z + xs * y + x];
	}

private:
	int xs, ys, zs;
	std::vector<int16_t> data;
};

#endif // !TABLE_H
