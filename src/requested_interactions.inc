  !requested interactions

  !corrections
  logical :: do_weak_mag_corrections = .true.
  logical :: do_ionion_correlation = .true.
  logical :: do_heavyscat_formfactor = .true.
  logical :: do_electronpolarization_correction = .true.

  !absorptions
  logical :: add_nue_absorption_on_n = .true.
  logical :: add_anue_absorption_on_p = .true.
  logical :: add_nue_absorption_on_A = .true.

  !scatterings
  logical :: add_nue_scattering_n = .true.
  logical :: add_nue_scattering_p = .true.
  logical :: add_nue_scattering_heavies = .true.
  logical :: add_nue_scattering_electrons = .true.
  logical :: add_nue_scattering_alphas = .true.
  logical :: add_anue_scattering_n = .true.
  logical :: add_anue_scattering_p = .true.
  logical :: add_anue_scattering_heavies = .true.
  logical :: add_anue_scattering_electrons = .true.
  logical :: add_anue_scattering_alphas = .true.
  logical :: add_numu_scattering_n = .true.
  logical :: add_numu_scattering_p = .true.
  logical :: add_numu_scattering_heavies = .true.
  logical :: add_numu_scattering_electrons = .true.
  logical :: add_numu_scattering_alphas = .true.
  logical :: add_anumu_scattering_n = .true.
  logical :: add_anumu_scattering_p = .true.
  logical :: add_anumu_scattering_heavies = .true.
  logical :: add_anumu_scattering_electrons = .true.
  logical :: add_anumu_scattering_alphas = .true.
  logical :: add_nutau_scattering_n = .true.
  logical :: add_nutau_scattering_p = .true.
  logical :: add_nutau_scattering_heavies = .true.
  logical :: add_nutau_scattering_electrons = .true.
  logical :: add_nutau_scattering_alphas = .true.
  logical :: add_anutau_scattering_n = .true.
  logical :: add_anutau_scattering_p = .true.
  logical :: add_anutau_scattering_heavies = .true.
  logical :: add_anutau_scattering_electrons = .true.
  logical :: add_anutau_scattering_alphas = .true.

  !emissivities
  logical :: add_nue_emission_epannihil = .true.
  logical :: add_anue_emission_epannihil = .true.
  logical :: add_numu_emission_epannihil = .true.
  logical :: add_anumu_emission_epannihil = .true.
  logical :: add_nutau_emission_epannihil = .true.
  logical :: add_anutau_emission_epannihil = .true.

  logical :: add_nue_emission_NNBrems = .true.
  logical :: add_anue_emission_NNBrems = .true.
  logical :: add_numu_emission_NNBrems = .true.
  logical :: add_anumu_emission_NNBrems = .true.
  logical :: add_nutau_emission_NNBrems = .true.
  logical :: add_anutau_emission_NNBrems = .true.
