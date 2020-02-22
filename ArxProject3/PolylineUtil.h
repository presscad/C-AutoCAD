#pragma once
class CPolylineUtil
{
public:
	CPolylineUtil();
	~CPolylineUtil();
	
static	AcDbObjectId  CPolylineUtil::Add(const AcGePoint2dArray &points, double width=0);
static	AcDbObjectId  CPolylineUtil::Add(const AcGePoint2d &ptStart, const AcGePoint2d &ptEnd, double width = 0);
static AcDbObjectId CPolylineUtil::Add3dPolyline(const AcGePoint3dArray &points);
static AcDbObjectId CPolylineUtil::AddRectangle(const AcGePoint2d &pt1, const AcGePoint2d &pt2, double width);
static AcDbObjectId CPolylineUtil::AddPolyCircle(const AcGePoint2d &ptCenter, double radius, double width);
static AcDbObjectId  CPolylineUtil::AddPolygon(const AcGePoint2d &ptCenter, int number, double radius, double rotation, double width);
static bool PointIsPolyVert(AcDbPolyline *pPoly, const AcGePoint2d &pt, double tol);
static void IntersetWithGeRay(AcDbPolyline * pPoly, const AcGeRay2d &geRay,
	AcGePoint3dArray &intPoints, double tol = 1.0E-7);
static int PtRelationToPoly(AcDbPolyline *pPoly, const AcGePoint2d &pt, double tol = 1.0E-7);
};

