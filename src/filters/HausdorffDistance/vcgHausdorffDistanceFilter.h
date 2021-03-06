// Copyright 2018 Andrea Mantovani

#ifndef VCGHAUSDORFFDISTANCEFILTER_H
#define VCGHAUSDORFFDISTANCEFILET_H

#include "vtkPointSetAlgorithm.h"

class VTK_EXPORT vcgHausdorffDistanceFilter : public vtkPointSetAlgorithm
{
public:
  static vcgHausdorffDistanceFilter* New();
  vtkTypeMacro(vcgHausdorffDistanceFilter, vtkPointSetAlgorithm);

  vtkGetMacro(DiagonalPercent, double)
  vtkGetMacro(NumberOfSamples, int);
  vtkGetMacro(SampleEdge, bool);
  vtkGetMacro(SampleFace, bool);
  vtkGetMacro(SampleFauxEdge, bool);
  vtkGetMacro(SampleVert, bool);
  vtkGetMacro(SaveSample, bool)

  vtkSetMacro(DiagonalPercent, double)
  vtkSetMacro(NumberOfSamples, int);
  vtkSetMacro(SampleEdge, bool);
  vtkSetMacro(SampleFace, bool);
  vtkSetMacro(SampleFauxEdge, bool);
  vtkSetMacro(SampleVert, bool);
  vtkSetMacro(SaveSample, bool)

  void PrintSelf(ostream &os, vtkIndent indent);

protected:
  vcgHausdorffDistanceFilter();
  ~vcgHausdorffDistanceFilter();

  int RequestData(vtkInformation *request,
                  vtkInformationVector **inputVector,
                  vtkInformationVector *outputVector);

private:
  double  DiagonalPercent;
  int     NumberOfSamples;
  bool    SampleEdge;
  bool    SampleFace;
  bool    SampleFauxEdge;
  bool    SampleVert;
  bool    SaveSample; 

  vcgHausdorffDistanceFilter(const vcgHausdorffDistanceFilter&) = delete;
  vcgHausdorffDistanceFilter(vcgHausdorffDistanceFilter&&) = delete;
  vcgHausdorffDistanceFilter& operator=(const vcgHausdorffDistanceFilter&) = delete;
};

#endif // VCGHAUSDORFFDISTANCEFILTER_H
