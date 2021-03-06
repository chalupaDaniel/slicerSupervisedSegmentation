/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

==============================================================================*/

// SegmentationToolboxModule Logic includes
#include <vtkSlicerSupervisedSegmentationToolboxMainLogic.h>

// SegmentationToolboxModule includes
#include "qSlicerSupervisedSegmentationToolboxMainModule.h"
#include "qSlicerSupervisedSegmentationToolboxMainModuleWidget.h"

//-----------------------------------------------------------------------------
#if (QT_VERSION < QT_VERSION_CHECK(5, 0, 0))
#include <QtPlugin>
Q_EXPORT_PLUGIN2(qSlicerSupervisedSegmentationToolboxMainModule, qSlicerSupervisedSegmentationToolboxMainModule);
#endif

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerSupervisedSegmentationToolboxMainModulePrivate
{
public:
  qSlicerSupervisedSegmentationToolboxMainModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicerSupervisedSegmentationToolboxMainModulePrivate methods

//-----------------------------------------------------------------------------
qSlicerSupervisedSegmentationToolboxMainModulePrivate::qSlicerSupervisedSegmentationToolboxMainModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerSupervisedSegmentationToolboxMainModule methods

//-----------------------------------------------------------------------------
qSlicerSupervisedSegmentationToolboxMainModule::qSlicerSupervisedSegmentationToolboxMainModule(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicerSupervisedSegmentationToolboxMainModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicerSupervisedSegmentationToolboxMainModule::~qSlicerSupervisedSegmentationToolboxMainModule()
{
}

//-----------------------------------------------------------------------------
QString qSlicerSupervisedSegmentationToolboxMainModule::helpText() const
{
  return "This module allows using machine learning to segment preprocessed images using one of the included algorithms.";
}

//-----------------------------------------------------------------------------
QString qSlicerSupervisedSegmentationToolboxMainModule::acknowledgementText() const
{
  return "";
}

//-----------------------------------------------------------------------------
QStringList qSlicerSupervisedSegmentationToolboxMainModule::contributors() const
{
  QStringList moduleContributors;
  moduleContributors << QString("Daniel Chalupa");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicerSupervisedSegmentationToolboxMainModule::icon() const
{
  return QIcon(":/Icons/SegmentationToolboxModule.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicerSupervisedSegmentationToolboxMainModule::categories() const
{
  return QStringList() << "Segmentation";
}

//-----------------------------------------------------------------------------
QStringList qSlicerSupervisedSegmentationToolboxMainModule::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicerSupervisedSegmentationToolboxMainModule::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation* qSlicerSupervisedSegmentationToolboxMainModule
::createWidgetRepresentation()
{
  return new qSlicerSupervisedSegmentationToolboxMainModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicerSupervisedSegmentationToolboxMainModule::createLogic()
{
  return vtkSlicerSupervisedSegmentationToolboxMainLogic::New();
}
