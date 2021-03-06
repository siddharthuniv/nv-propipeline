// Copyright NVIDIA Corporation 2011
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//  * Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//  * Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//  * Neither the name of NVIDIA CORPORATION nor the names of its
//    contributors may be used to endorse or promote products derived
//    from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
// PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
// OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


#pragma once

#include <QCheckBox>
#include <QDialog>
#include <QGroupBox>
#include <QLineEdit>
#include <dp/sg/core/Scene.h>

class OptimizerDialog : public QDialog
{
  Q_OBJECT

  public:
    OptimizerDialog( const dp::sg::core::SceneSharedPtr & scene, QWidget * parent = 0 );
    ~OptimizerDialog();

  protected slots:
    void clickedAll( bool );
    void clickedNone( bool );
    void accept();

  private:
    void switchAllButtons( bool on );

  private:
    QCheckBox * m_ignoreNamesButton;
    QCheckBox * m_identityToGroupButton;
    QPushButton * m_allButton;
    QPushButton * m_noneButton;
    QGroupBox * m_eliminateBox;
    QGroupBox * m_combineBox;
    QGroupBox * m_unifyBox;
    QCheckBox * m_eliminateGroupsButton;
    QCheckBox * m_eliminateSingleChildGroupsButton;
    QCheckBox * m_eliminateIndexSetsButton;
    QCheckBox * m_eliminateLODsButton;
    QCheckBox * m_combineGeoNodesButton;
    QCheckBox * m_combineLODsButton;
    QCheckBox * m_combineLODRangesButton;
    QCheckBox * m_combineTransformsButton;
    QCheckBox * m_unifyEffectDataButton;
    QCheckBox * m_unifyGeoNodesButton;
    QCheckBox * m_unifyGroupsButton;
    QCheckBox * m_unifyIndexSetsButton;
    QCheckBox * m_unifyLODsButton;
    QCheckBox * m_unifyParameterGroupDataButton;
    QCheckBox * m_unifyPrimitivesButton;
    QCheckBox * m_unifySamplersButton;
    QCheckBox * m_unifyTexturesButton;
    QCheckBox * m_unifyTrafoAnimationsButton;
    QCheckBox * m_unifyVertexAttributeSetsButton;
    QCheckBox * m_unifyVerticesButton;
    QLineEdit * m_epsilonEdit;
    QCheckBox * m_vertexCacheOptimizeButton;
    QPushButton * m_okButton;
    QPushButton * m_cancelButton;

    dp::sg::core::SceneSharedPtr m_scene;
};
