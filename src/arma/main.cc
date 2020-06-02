#include <armadillo>
#include <string>
#include <vector>

#include <h5cpp/core>
#include "h5_complex_sandwich.hpp"
#include <h5cpp/io>

namespace Data {
  std::string filename = "./16bcn.h5";

  auto Config_fadingExtraParam_alpha = h5::read<std::vector<double>>(filename,
    "/Config/fadingExtraParam/alpha/alpha"); // shape (1,)

  auto Config_fadingExtraParam_betha = h5::read<arma::s64>(filename,
    "/Config/fadingExtraParam/betha/betha"); // shape (1,)

  auto Config_fadingExtraParam_cosineFrac = h5::read<arma::s64>(filename,
    "/Config/fadingExtraParam/cosineFrac/cosineFrac"); // shape (1,)

  auto Config_fadingExtraParam_sidelobeAtten = h5::read<arma::s64>(filename,
    "/Config/fadingExtraParam/sidelobeAtten/sidelobeAtten"); // shape (1,)

  auto Config_fadingWindow = h5::read<std::vector<std::string>>(filename,
    "/Config/fadingWindow/fadingWindow"); // shape (1,)

  auto Config_generationMethod = h5::read<std::vector<std::string>>(filename,
    "/Config/generationMethod/generationMethod"); // shape (1,)

  auto Config_isSymmetric = h5::read<arma::s64>(filename,
    "/Config/isSymmetric/isSymmetric"); // shape (1,)

  auto Config_maxFreq = h5::read<arma::s64>(filename,
    "/Config/maxFreq/maxFreq"); // shape (1,)

  auto Config_minFreq = h5::read<arma::s64>(filename,
    "/Config/minFreq/minFreq"); // shape (1,)

  auto Config_nSymbolIterations = h5::read<arma::s64>(filename,
    "/Config/nSymbolIterations/nSymbolIterations"); // shape (1,)

  auto Config_nSymbols = h5::read<arma::s64>(filename,
    "/Config/nSymbols/nSymbols"); // shape (1,)

  auto Config_nSync = h5::read<arma::s64>(filename,
    "/Config/nSync/nSync"); // shape (1,)

  auto Config_nSyncIterations = h5::read<arma::s64>(filename,
    "/Config/nSyncIterations/nSyncIterations"); // shape (1,)

  auto Config_sampleRate = h5::read<arma::s64>(filename,
    "/Config/sampleRate/sampleRate"); // shape (1,)

  auto Config_signalType = h5::read<std::vector<std::string>>(filename,
    "/Config/signalType/signalType"); // shape (1,)

  auto Config_symbolSize = h5::read<arma::s64>(filename,
    "/Config/symbolSize/symbolSize"); // shape (1,)

  auto Config_syncSize = h5::read<arma::s64>(filename,
    "/Config/syncSize/syncSize"); // shape (1,)

  auto Correlation_symbolAutoCorrValues = h5::read<arma::dvec>(filename,
    "/Correlation/symbolAutoCorrValues/symbolAutoCorrValues"); // shape (16,)

  auto Correlation_symbolBadAutoCorrIndexes = h5::read<arma::s64>(filename,
    "/Correlation/symbolBadAutoCorrIndexes/symbolBadAutoCorrIndexes"); // shape (1,)

  auto Correlation_symbolCrossCorrValues = h5::read<arma::dvec>(filename,
    "/Correlation/symbolCrossCorrValues/symbolCrossCorrValues"); // shape (120,)

  auto Correlation_symbolFourierReversedValues = h5::read<arma::cx_dmat>(filename,
    "/Correlation/symbolFourierReversedValues/symbolFourierReversedValues"); // shape (2047, 16)

  auto Correlation_symbolFourierValues = h5::read<arma::cx_dmat>(filename,
    "/Correlation/symbolFourierValues/symbolFourierValues"); // shape (2047, 16)

  auto Correlation_symbolLimitBadAutoCorrValue = h5::read<std::vector<double>>(filename,
    "/Correlation/symbolLimitBadAutoCorrValue/symbolLimitBadAutoCorrValue"); // shape (1,)

  auto Correlation_symbolMaxCrossCorrValue = h5::read<std::vector<double>>(filename,
    "/Correlation/symbolMaxCrossCorrValue/symbolMaxCrossCorrValue"); // shape (1,)

  auto Correlation_symbolMinAutoCorrIndex = h5::read<arma::s64>(filename,
    "/Correlation/symbolMinAutoCorrIndex/symbolMinAutoCorrIndex"); // shape (1,)

  auto Correlation_symbolMinAutoCorrValue = h5::read<std::vector<double>>(filename,
    "/Correlation/symbolMinAutoCorrValue/symbolMinAutoCorrValue"); // shape (1,)

  auto Correlation_syncAutoCorrValues = h5::read<arma::dvec>(filename,
    "/Correlation/syncAutoCorrValues/syncAutoCorrValues"); // shape (2,)

  auto Correlation_syncCrossCorrValuesSymbol = h5::read<arma::dmat>(filename,
    "/Correlation/syncCrossCorrValuesSymbol/syncCrossCorrValuesSymbol"); // shape (16, 2)

  auto Correlation_syncCrossCorrValuesSync = h5::read<std::vector<double>>(filename,
    "/Correlation/syncCrossCorrValuesSync/syncCrossCorrValuesSync"); // shape (1,)

  auto Correlation_syncFourierReversedValues = h5::read<arma::cx_dmat>(filename,
    "/Correlation/syncFourierReversedValues/syncFourierReversedValues"); // shape (4095, 2)

  auto Correlation_syncFourierValues = h5::read<arma::cx_dmat>(filename,
    "/Correlation/syncFourierValues/syncFourierValues"); // shape (4095, 2)

  auto Correlation_syncMaxCrossCorrIndex = h5::read<arma::s64>(filename,
    "/Correlation/syncMaxCrossCorrIndex/syncMaxCrossCorrIndex"); // shape (1,)

  auto Correlation_syncMaxCrossCorrValue = h5::read<std::vector<double>>(filename,
    "/Correlation/syncMaxCrossCorrValue/syncMaxCrossCorrValue"); // shape (1,)

  auto Correlation_syncMaxCrossCorrValueSync = h5::read<std::vector<double>>(filename,
    "/Correlation/syncMaxCrossCorrValueSync/syncMaxCrossCorrValueSync"); // shape (1,)

  auto Correlation_syncMinAutoCorrIndex = h5::read<arma::s64>(filename,
    "/Correlation/syncMinAutoCorrIndex/syncMinAutoCorrIndex"); // shape (1,)

  auto Correlation_syncMinAutoCorrValue = h5::read<std::vector<double>>(filename,
    "/Correlation/syncMinAutoCorrValue/syncMinAutoCorrValue"); // shape (1,)

  auto Fading_fadingExtraParam = h5::read<arma::s64>(filename,
    "/Fading/fadingExtraParam/fadingExtraParam"); // shape (1,)

  auto Fading_fadingWindowType = h5::read<std::vector<std::string>>(filename,
    "/Fading/fadingWindowType/fadingWindowType"); // shape (1,)

  auto Fading_symbolCoeff = h5::read<arma::dvec>(filename,
    "/Fading/symbolCoeff/symbolCoeff"); // shape (1024,)

  auto Fading_syncCoeff = h5::read<arma::dvec>(filename,
    "/Fading/syncCoeff/syncCoeff"); // shape (2048,)

  auto Filter_coef = h5::read<arma::dvec>(filename,
    "/Filter/coef/coef"); // shape (444,)

  auto Symbols_Q1_ave_symbol = h5::read<std::vector<double>>(filename,
    "/Symbols/Q1_ave_symbol/Q1_ave_symbol"); // shape (1,)

  auto Symbols_Q2_ave_symbol = h5::read<std::vector<double>>(filename,
    "/Symbols/Q2_ave_symbol/Q2_ave_symbol"); // shape (1,)

  auto Symbols_Q_old_symbol = h5::read<std::vector<double>>(filename,
    "/Symbols/Q_old_symbol/Q_old_symbol"); // shape (1,)

  auto Symbols_autoCorrAve_symbol = h5::read<std::vector<double>>(filename,
    "/Symbols/autoCorrAve_symbol/autoCorrAve_symbol"); // shape (1,)

  auto Symbols_quality = h5::read<std::vector<double>>(filename,
    "/Symbols/quality/quality"); // shape (1,)

  auto Symbols_samples = h5::read<arma::dmat>(filename,
    "/Symbols/samples/samples"); // shape (1024, 16)

  auto Symbols_symbolRootMag = h5::read<arma::dmat>(filename,
    "/Symbols/symbolRootMag/symbolRootMag"); // shape (1024, 16)

  auto Symbols_symbolRootPhase = h5::read<arma::dmat>(filename,
    "/Symbols/symbolRootPhase/symbolRootPhase"); // shape (1024, 16)

  auto Sync_Q1_ave_sync = h5::read<std::vector<double>>(filename,
    "/Sync/Q1_ave_sync/Q1_ave_sync"); // shape (1,)

  auto Sync_Q2_ave_sync = h5::read<std::vector<double>>(filename,
    "/Sync/Q2_ave_sync/Q2_ave_sync"); // shape (1,)

  auto Sync_Q_old_sync = h5::read<std::vector<double>>(filename,
    "/Sync/Q_old_sync/Q_old_sync"); // shape (1,)

  auto Sync_Qn_ave = h5::read<std::vector<double>>(filename,
    "/Sync/Qn_ave/Qn_ave"); // shape (1,)

  auto Sync_autoCorrAve_sync = h5::read<std::vector<double>>(filename,
    "/Sync/autoCorrAve_sync/autoCorrAve_sync"); // shape (1,)

  auto Sync_quality = h5::read<std::vector<double>>(filename,
    "/Sync/quality/quality"); // shape (1,)

  auto Sync_samples = h5::read<arma::dmat>(filename,
    "/Sync/samples/samples"); // shape (2048, 2)

  auto Sync_symbolRootMag = h5::read<arma::dmat>(filename,
    "/Sync/symbolRootMag/symbolRootMag"); // shape (2048, 2)

  auto Sync_symbolRootPhase = h5::read<arma::dmat>(filename,
    "/Sync/symbolRootPhase/symbolRootPhase"); // shape (2048, 2)
}

int main()
{
  Data::Sync_samples.print();
  return 0;
}
