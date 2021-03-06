/////////////////////////////////////////////////////////////////////////////
// Author:      PB
// Modified by:
// Copyright:   (c) 2012 PB <pbfordev@gmail.com>
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////


#ifndef _WXAUTOEXCEL_FWD_H
#define _WXAUTOEXCEL_FWD_H

namespace wxAutoExcel {

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxXlTribool;

extern wxXlTribool wxDefaultTribool;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelObject;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxAutoExcelObjectErrorModeOverrider;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelApplication;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelWorkbooks;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelWorkbook;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelSheets;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelSheet;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelWorksheets;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelWorksheet;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelWindow;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelWindows;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelPane;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelPanes;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelTab;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelRange;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelAreas;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelHeaderFooter;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelHeadersFooters;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelPage;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelPages;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelPageSetup;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelComment;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelComments;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelFont;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelCharacters;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelBorder;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelBorders;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelColorStop;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelColorStops;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelLinearGradient;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelRectangularGradient;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelInterior;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelStyle;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelStyles;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelAutoFilter;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelFilter;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelFilters;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelSort;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelSortField;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelSortFields;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelHyperlink;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelHyperlinks;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelSheetView;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelSheetViews;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelWorksheetView;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelValidation;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelError;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelErrors;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelErrorCheckingOptions;

#if WXAUTOEXCEL_USE_CONDFORMAT

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelAboveAverage;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelDatabar;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelColorScale;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelColorScaleCriterion;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelColorScaleCriteria;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelConditionValue;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelDataBarBorder;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelFormatColor;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelFormatCondition;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelFormatConditions;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelTop10;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelUniqueValues;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelIconSet;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelIconSets;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelIconCriterion;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelIconCriteria;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelIconSetCondition;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelNegativeBarFormat;

#endif // WXAUTOEXCEL_USE_CONDFORMAT

#if WXAUTOEXCEL_USE_SHAPES

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelShape;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelShapes;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelShapeRange;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelGroupShapes;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelShapeNode;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelShapeNodes;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelFreeformBuilder;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelAdjustments;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelCalloutFormat;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelConnectorFormat;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelControlFormat;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelLinkFormat;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelTextEffectFormat;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelModel3DFormat;

#endif // #if WXAUTOEXCEL_USE_SHAPES

#if WXAUTOEXCEL_USE_SHAPES || WXAUTOEXCEL_USE_CHARTS

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelColorFormat;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelFillFormat;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelGlowFormat;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelLineFormat;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelOLEFormat;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelPictureFormat;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelReflectionFormat;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelShadowFormat;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelSoftEdgeFormat;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelThreeDFormat;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelBulletFormat2;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelFont2;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelParagraphFormat2;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelTabStop2;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelTabStops2;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelTextColumn2;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelTextFrame;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelTextFrame2;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelTextRange2;


#endif // #if WXAUTOEXCEL_USE_SHAPES || WXAUTOEXCEL_USE_CHARTS

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelIcon;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelGraphic;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelName;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelNames;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelPageBreak;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelPageBreaks;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelOLEObject;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelOLEObjects;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelDocumentProperty;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelDocumentProperties;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelRecentFile;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelRecentFiles;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelLanguageSettings;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelAddIn;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelAddIns;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelAddIns2;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelListRow;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelListRows;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelListColumn;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelListColumns;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelListDataFormat;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelListObject;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelListObjects;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelTableObject;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelTableStyleElement;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelTableStyleElements;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelTableStyle;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelTableStyles;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelAllowEditRange;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelAllowEditRanges;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelAuthor;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelCommentThreaded;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelCommentsThreaded;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelCustomProperty;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelCustomProperties;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelDisplayFormat;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelFileExportConverter;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelFileExportConverters;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelMultiThreadedCalculation;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelOutline;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelProtection;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelUserAccess;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelUserAccessList;


#if WXAUTOEXCEL_USE_CHARTS

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelAxis;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelAxes;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelAxisTitle;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelCategoryCollection;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelChart;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelCharts;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelChartArea;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelChartCategory;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelChartColorFormat;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelChartFillFormat;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelChartFormat;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelChartGroup;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelChartGroups;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelChartObject;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelChartObjects;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelChartView;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelChartTitle;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelDataLabel;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelDataLabels;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelDataFormat;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelDataTable;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelDisplayUnitLabel;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelDownBars;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelDropLines;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelErrorBars;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelFloor;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelGridlines;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelHiLoLines;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelLeaderLines;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelLegend;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelLegendEntry;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelLegendEntries;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelLegendKey;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelPlotArea;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelPoint;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelPoints;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelSeries;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelSeriesCollection;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelFullSeriesCollection;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelSeriesLines;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelTickLabels;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelTrendline;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelTrendlines;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelUpBars;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelWalls;

class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelSparkHorizontalAxis;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelSparkVerticalAxis;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelSparkAxes;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelSparkColor;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelSparkline;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelSparklineGroup;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelSparklineGroups;
class WXDLLIMPEXP_FWD_WXAUTOEXCEL wxExcelSparkPoints;

#endif // #if WXAUTOEXCEL_USE_CHARTS

} // namespace wxAutoExcel

#endif //_WXAUTOEXCEL_FWD_H
