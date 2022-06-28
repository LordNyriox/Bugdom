//
// camera.h
//

#define	HITHER_DISTANCE	20.0f
#define	YON_DISTANCE	5000.0f		// how far the game will render objects in the view frustum

void InitCamera(void);
void UpdateCamera(void);
extern	void CalcCameraMatrixInfo(QD3DSetupOutputType *);
extern	void ResetCameraSettings(void);
void DrawLensFlare(const QD3DSetupOutputType *setupInfo);
void DisposeLensFlares(void);
