.. _changes_0_14:

Version 0.14 (2017-03-24)
-------------------------

Changelog
~~~~~~~~~

- Add example of time-frequency decoding with CSP by `Laura Gwilliams`_

- Automatically create a legend in :func:`mne.viz.plot_evoked_topo` by `Jussi Nurminen`_

- Add I/O support for Artemis123 infant/toddler MEG data by `Luke Bloy`_

- Add filter plotting functions :func:`mne.viz.plot_filter` and :func:`mne.viz.plot_ideal_filter` as well as filter creation function :func:`mne.filter.create_filter` by `Eric Larson`_

- Add HCP-MMP1.0 parcellation dataset downloader by `Eric Larson`_

- Add option to project EEG electrodes onto the scalp in ``mne.viz.plot_trans`` by `Eric Larson`_

- Add option to plot individual sensors in :meth:`mne.io.Raw.plot_psd` by `Alex Gramfort`_ and `Eric Larson`_

- Add option to plot ECoG electrodes in ``mne.viz.plot_trans`` by `Eric Larson`_

- Add convenient default values to :meth:`mne.io.Raw.apply_hilbert` and :meth:`mne.io.Raw.apply_function` by `Denis Engemann`_

- Remove MNE-C requirement for :ref:`mne make_scalp_surfaces` by `Eric Larson`_

- Add support for FastTrack Polhemus ``.mat`` file outputs in ``hsp`` argument of ``mne.channels.read_dig_montage`` by `Eric Larson`_

- Add option to convert 3d electrode plots to a snapshot with 2d electrode positions with :func:`mne.viz.snapshot_brain_montage` by `Chris Holdgraf`_

- Add skull surface plotting option to ``mne.viz.plot_trans`` by `Jaakko Leppakangas`_

- Add minimum-phase filtering option in :meth:`mne.io.Raw.filter` by `Eric Larson`_

- Add support for reading ASCII BrainVision files in :func:`mne.io.read_raw_brainvision` by `Eric Larson`_

- Add method of ICA objects for retrieving the component maps :meth:`mne.preprocessing.ICA.get_components` by `Jona Sassenhagen`_

- Add option to plot events in :func:`mne.viz.plot_epochs` by `Jaakko Leppakangas`_

- Add dipole definitions for older phantom at Otaniemi in :func:`mne.dipole.get_phantom_dipoles` by `Eric Larson`_

- Add spatial colors option for :func:`mne.viz.plot_raw_psd` by `Jaakko Leppakangas`_

- Add functions like :func:`get_volume_labels_from_src` to handle mixed source spaces by `Annalisa Pascarella`_

- Add convenience function for opening MNE documentation :func:`open_docs` by `Eric Larson`_

- Add option in :meth:`mne.io.Raw.plot` to display the time axis relative to ``raw.first_samp`` by `Mainak Jas`_

- Add new :mod:`mne.datasets.visual_92_categories <mne.datasets.visual_92_categories.data_path>` dataset by `Jaakko Leppakangas`_

- Add option in :func:`mne.io.read_raw_edf` to allow channel exclusion by `Jaakko Leppakangas`_

- Allow integer event codes in :func:`mne.read_epochs_eeglab` by `Jaakko Leppakangas`_

- Add ability to match channel names in a case insensitive manner when applying a ``mne.channels.Montage`` by `Marijn van Vliet`_

- Add ``yscale`` keyword argument to :meth:`mne.time_frequency.AverageTFR.plot` that allows specifying whether to present the frequency axis in linear (``'linear'``) or log (``'log'``) scale. The default value is ``'auto'`` which detects whether frequencies are log-spaced and sets yscale to log. Added by `Mikołaj Magnuski`_

- Add :ref:`Representational Similarity Analysis (RSA) <ex-rsa-noplot>` example on :mod:`mne.datasets.visual_92_categories.data_path` dataset by `Jaakko Leppakangas`_, `Jean-Remi King`_ and `Alex Gramfort`_

- Add support for NeuroScan files with event type 3 in :func:`mne.io.read_raw_cnt` by `Marijn van Vliet`_

- Add interactive annotation mode to :meth:`mne.io.Raw.plot` (accessed by pressing 'a') by `Jaakko Leppakangas`_

- Add support for deleting all projectors or a list of indices in :meth:`mne.io.Raw.del_proj` by `Eric Larson`_

- Add source space plotting with :meth:`mne.SourceSpaces.plot` using ``mne.viz.plot_trans`` by `Eric Larson`_

- Add :func:`mne.decoding.get_coef` to retrieve and inverse the coefficients of a linear model - typically a spatial filter or pattern, by `Jean-Remi King`_

- Add support for reading in EGI MFF digitization coordinate files in ``mne.channels.read_dig_montage`` by `Matt Boggess`_

- Add ``n_per_seg`` keyword argument to :func:`mne.time_frequency.psd_welch` and :func:`mne.time_frequency.psd_array_welch` that allows to control segment length independently of ``n_fft`` and use zero-padding when ``n_fft > n_per_seg`` by `Mikołaj Magnuski`_

- Add annotation aware data getter :meth:`mne.io.Raw.get_data` by `Jaakko Leppakangas`_

- Add support of dipole location visualization with MRI slice overlay with matplotlib to :func:`mne.viz.plot_dipole_locations` via mode='orthoview' parameter by `Jaakko Leppakangas`_ and `Alex Gramfort`_

- Add plotting of head positions as a function of time in :func:`mne.viz.plot_head_positions` by `Eric Larson`_

- Add ``real_filter`` option to ``mne.beamformer.dics``, ``mne.beamformer.dics_source_power``, ``mne.beamformer.tf_dics`` and ``mne.beamformer.dics_epochs`` by `Eric Larson`_, `Alex Gramfort`_ and `Andrea Brovelli`_.

- Add a demo script showing how to use a custom inverse solver with MNE by `Alex Gramfort`_

- Functions :func:`mne.preprocessing.create_ecg_epochs`, :func:`mne.preprocessing.create_eog_epochs`, :func:`mne.compute_raw_covariance` and ICA methods :meth:`mne.preprocessing.ICA.score_sources`, :meth:`mne.preprocessing.ICA.find_bads_ecg`, :meth:`mne.preprocessing.ICA.find_bads_eog` are now annotation aware by `Jaakko Leppakangas`_

- Allow using ``spatial_colors`` for non-standard layouts by creating custom layouts from channel locations and add ``to_sphere`` keyword to :func:`mne.viz.plot_sensors` to allow plotting sensors that are not on the head surface by `Jaakko Leppakangas`_

- Concatenating raws with :func:`mne.concatenate_raws` now creates boundary annotations automatically by `Jaakko Leppakangas`_

- :func:`mne.viz.plot_projs_topomap` now supports plotting EEG topomaps by passing in :class:`mne.Info` by `Eric Larson`_

BUG
~~~

- Fix bug with DICS and LCMV (e.g., ``mne.beamformer.lcmv``, ``mne.beamformer.dics``) where regularization was done improperly. The default ``reg=0.01`` has been changed to ``reg=0.05``, by `Andrea Brovelli`_, `Alex Gramfort`_, and `Eric Larson`_

- Fix callback function call in ``mne.viz.topo._plot_topo_onpick`` by `Erkka Heinila`_

- Fix reading multi-file CTF recordings in :func:`mne.io.read_raw_ctf` by `Niklas Wilming`_

- Fix computation of AR coefficients across channels in :func:`mne.time_frequency.fit_iir_model_raw` by `Eric Larson`_

- Fix maxfilter channel names extra space bug in :func:`mne.preprocessing.maxwell_filter` by `Sheraz Khan`_

- :func:`mne.channels.find_layout` now leaves out the excluded channels by `Jaakko Leppakangas`_

- Array data constructors :class:`mne.io.RawArray` and :class:`EvokedArray` now make a copy of the info structure by `Jaakko Leppakangas`_

- Fix bug with finding layouts in :func:`mne.viz.plot_projs_topomap` by `Eric Larson`_

- Fix bug :func:`mne.io.anonymize_info` when Info does not contain 'file_id' or 'meas_id' fields by `Jean-Remi King`_

- Fix colormap selection in :func:`mne.viz.plot_evoked_topomap` when using positive vmin with negative data by `Jaakko Leppakangas`_

- Fix channel name comparison in ``mne.channels.read_montage`` so that if ``ch_names`` is provided, the returned montage will have channel names in the same letter case by `Jaakko Leppakangas`_

- Fix :meth:`inst.set_montage(montage) <mne.io.Raw.set_montage>` to only set ``inst.info['dev_head_t']`` if ``dev_head_t=True`` in ``mne.channels.read_dig_montage`` by `Eric Larson`_

- Fix handling of events in ``mne.realtime.RtEpochs`` when the triggers were split between two buffers resulting in missing and/or duplicate epochs by `Mainak Jas`_ and `Antti Rantala`_

- Fix bug with automatic decimation in :func:`mne.io.read_raw_kit` by `Keith Doelling`_

- Fix bug with :func:`setup_volume_source_space` where arguments ``subject`` and ``subjects_dir`` were ignored by `Jaakko Leppakangas`_

- Fix sanity check for incompatible ``threshold`` and ``tail`` values in clustering functions like :func:`mne.stats.spatio_temporal_cluster_1samp_test` by `Eric Larson`_

- Fix ``_bad_dropped`` not being set when loading eeglab epoched files via :func:`mne.read_epochs_eeglab` which resulted in :func:`len` not working by `Mikołaj Magnuski`_

- Fix a bug in :meth:`mne.time_frequency.AverageTFR.plot` when plotting without a colorbar by `Jaakko Leppakangas`_

- Fix ``_filenames`` attribute in creation of :class:`mne.io.RawArray` with :meth:`mne.preprocessing.ICA.get_sources` by `Paul Pasler`_

- Fix contour levels in :func:`mne.viz.plot_evoked_topomap` to be uniform across topomaps by `Jaakko Leppakangas`_

- Fix bug in :func:`mne.preprocessing.maxwell_filter` where fine calibration indices were mismatched leading to an ``AssertionError`` by `Eric Larson`_

- Fix bug in :func:`mne.preprocessing.fix_stim_artifact` where non-data channels were interpolated by `Eric Larson`_

- :class:`mne.decoding.Scaler` now scales each channel independently using data from all time points (epochs and times) instead of scaling all channels for each time point. It also now accepts parameter ``scalings`` to determine the data scaling method (default is ``None`` to use static channel-type-based scaling), by `Asish Panda`_, `Jean-Remi King`_, and `Eric Larson`_

- Raise error if the cv parameter of ``mne.decoding.GeneralizationAcrossTime`` and ``mne.decoding.TimeDecoding`` is not a partition and the predict_mode is "cross-validation" by `Jean-Remi King`_

- Fix bug in :func:`mne.io.read_raw_edf` when ``preload=False`` and channels have different sampling rates by `Jaakko Leppakangas`_

- Fix :func:`mne.read_labels_from_annot` to set ``label.values[:]=1`` rather than 0 for consistency with the :class:`Label` class by `Jon Houck`_

- Fix plotting non-uniform freqs (for example log-spaced) in :meth:`mne.time_frequency.AverageTFR.plot` by `Mikołaj Magnuski`_

- Fix :func:`mne.minimum_norm.compute_source_psd` when used with ``pick_ori=None`` by `Annalisa Pascarella`_ and `Alex Gramfort`_

- Fix bug in :class:`mne.Annotations` where concatenating two raws where ``orig_time`` of the second run is ``None`` by `Jaakko Leppakangas`_

- Fix reading channel location from eeglab ``.set`` files when some of the channels do not provide this information. Previously all channel locations were ignored in such case, now they are read - unless a montage is provided by the user in which case only channel names are read from set file. By `Mikołaj Magnuski`_

- Fix reading eeglab ``.set`` files when ``.chanlocs`` structure does not contain ``X``, ``Y`` or ``Z`` fields by `Mikołaj Magnuski`_

- Fix bug with :func:`mne.simulation.simulate_raw` when ``interp != 'zero'`` by `Eric Larson`_

- Fix :func:`mne.fit_dipole` to handle sphere model rank deficiency properly by `Alex Gramfort`_

- Raise error in :func:`mne.concatenate_epochs` when concatenated epochs have conflicting event_id by `Mikołaj Magnuski`_

- Fix handling of ``n_components=None`` in :class:`mne.preprocessing.ICA` by `Richard Höchenberger`_

- Fix reading of fiducials correctly from CTF data in :func:`mne.io.read_raw_ctf` by `Jaakko Leppakangas`_

- Fix :func:`mne.beamformer.rap_music` to return dipoles with amplitudes in Am instead of nAm by `Jaakko Leppakangas`_

- Fix computation of duality gap in ``mne.inverse_sparse.mxne_optim.dgap_l21`` by `Mathurin Massias`_

API
~~~

- The filtering functions ``band_pass_filter``, ``band_stop_filter``, ``low_pass_filter``, and ``high_pass_filter`` have been deprecated in favor of :func:`mne.filter.filter_data` by `Eric Larson`_

- :class:`EvokedArray` now has default value ``tmin=0.`` by `Jaakko Leppakangas`_

- The ``ch_type`` argument for ``mne.viz.plot_trans`` has been deprecated, use ``eeg_sensors`` and ``meg_sensors`` instead, by `Eric Larson`_

- The default ``tmax=60.`` in :meth:`mne.io.Raw.plot_psd` will change to ``tmax=np.inf`` in 0.15, by `Eric Larson`_

- Base classes :class:`mne.io.BaseRaw` and :class:`mne.BaseEpochs` are now public to allow easier typechecking, by `Daniel McCloy`_

- :func:`mne.io.read_raw_edf` now combines triggers from multiple tal channels to 'STI 014' by `Jaakko Leppakangas`_

- The measurement info :class:`Info` no longer contains a potentially misleading ``info['filename']`` entry. Use class properties like :attr:`mne.io.Raw.filenames` or :attr:`mne.Epochs.filename` instead by `Eric Larson`_

- Default fiducial name change from 'nz' to 'nasion' in ``mne.channels.read_montage``, so that it is the same for both ``mne.channels.Montage`` and :class: `mne.channels.DigMontage` by `Leonardo Barbosa`_

- MNE's additional files for the ``fsaverage`` head/brain model are now included in MNE-Python, and the now superfluous ``mne_root`` parameter to  :func:`create_default_subject` has been deprecated by `Christian Brodbeck`_

- An ``overwrite=False`` default parameter has been added to :func:`write_source_spaces` to protect against accidental overwrites, by `Eric Larson`_

- The :class:`mne.decoding.LinearModel` class will no longer support ``plot_filters`` and ``plot_patterns``, use :class:`mne.EvokedArray` with :func:`mne.decoding.get_coef` instead, by `Jean-Remi King`_

- Made functions :func:`mne.time_frequency.tfr_array_multitaper`, :func:`mne.time_frequency.tfr_array_morlet`, :func:`mne.time_frequency.tfr_array_stockwell`, :func:`mne.time_frequency.psd_array_multitaper` and :func:`mne.time_frequency.psd_array_welch` public to allow computing TFRs and PSDs on numpy arrays by `Jaakko Leppakangas`_

- :meth:`mne.preprocessing.ICA.fit` now rejects data annotated bad by default. Turn off with ``reject_by_annotation=False``, by `Jaakko Leppakangas`_

- :func:`mne.io.read_raw_egi` now names channels with pattern 'E<idx>'. This behavior can be changed with parameter ``channel_naming`` by `Jaakko Leppakangas`_

- the ``name`` parameter in :class:`mne.Epochs` is deprecated, by `Jaakko Leppakangas`_

Authors
~~~~~~~

People who contributed to this release  (in alphabetical order):

* Alexander Rudiuk
* Alexandre Gramfort
* Annalisa Pascarella
* Antti Rantala
* Asish Panda
* Burkhard Maess
* Chris Holdgraf
* Christian Brodbeck
* Cristóbal Moënne-Loccoz
* Daniel McCloy
* Denis A. Engemann
* Eric Larson
* Erkka Heinila
* Hermann Sonntag
* Jaakko Leppakangas
* Jakub Kaczmarzyk
* Jean-Remi King
* Jon Houck
* Jona Sassenhagen
* Jussi Nurminen
* Keith Doelling
* Leonardo S. Barbosa
* Lorenz Esch
* Lorenzo Alfine
* Luke Bloy
* Mainak Jas
* Marijn van Vliet
* Matt Boggess
* Matteo Visconti
* Mikolaj Magnuski
* Niklas Wilming
* Paul Pasler
* Richard Höchenberger
* Sheraz Khan
* Stefan Repplinger
* Teon Brooks
* Yaroslav Halchenko
