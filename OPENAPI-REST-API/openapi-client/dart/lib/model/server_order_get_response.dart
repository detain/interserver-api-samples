//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;

class ServerOrderGetResponse {
  /// Returns a new [ServerOrderGetResponse] instance.
  ServerOrderGetResponse({
    required this.formValues,
    required this.configIds,
    required this.cpu,
    this.cpuLi = const {},
    required this.configLi,
    required this.frequency,
    required this.currency,
    required this.country,
    required this.step,
    this.fieldLabel = const {},
    this.cpuCores = const {},
    this.currencySymbol,
    this.custid,
    this.ima,
    this.regions = const [],
    this.assetServers = const [],
    this.buyItServers = const [],
    this.displayShowmore,
    this.custDiscount,
  });

  FormValues formValues;

  ConfigIds configIds;

  int cpu;

  Map<String, Cpu> cpuLi;

  ConfigLists configLi;

  int frequency;

  String currency;

  String country;

  String step;

  Map<String, FieldLabel> fieldLabel;

  Map<String, Map<String, CpuWithDefaults>> cpuCores;

  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  String? currencySymbol;

  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  int? custid;

  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  String? ima;

  List<Region> regions;

  List<AssetServer> assetServers;

  List<Object> buyItServers;

  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  String? displayShowmore;

  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  num? custDiscount;

  @override
  bool operator ==(Object other) => identical(this, other) || other is ServerOrderGetResponse &&
    other.formValues == formValues &&
    other.configIds == configIds &&
    other.cpu == cpu &&
    _deepEquality.equals(other.cpuLi, cpuLi) &&
    other.configLi == configLi &&
    other.frequency == frequency &&
    other.currency == currency &&
    other.country == country &&
    other.step == step &&
    _deepEquality.equals(other.fieldLabel, fieldLabel) &&
    _deepEquality.equals(other.cpuCores, cpuCores) &&
    other.currencySymbol == currencySymbol &&
    other.custid == custid &&
    other.ima == ima &&
    _deepEquality.equals(other.regions, regions) &&
    _deepEquality.equals(other.assetServers, assetServers) &&
    _deepEquality.equals(other.buyItServers, buyItServers) &&
    other.displayShowmore == displayShowmore &&
    other.custDiscount == custDiscount;

  @override
  int get hashCode =>
    // ignore: unnecessary_parenthesis
    (formValues.hashCode) +
    (configIds.hashCode) +
    (cpu.hashCode) +
    (cpuLi.hashCode) +
    (configLi.hashCode) +
    (frequency.hashCode) +
    (currency.hashCode) +
    (country.hashCode) +
    (step.hashCode) +
    (fieldLabel.hashCode) +
    (cpuCores.hashCode) +
    (currencySymbol == null ? 0 : currencySymbol!.hashCode) +
    (custid == null ? 0 : custid!.hashCode) +
    (ima == null ? 0 : ima!.hashCode) +
    (regions.hashCode) +
    (assetServers.hashCode) +
    (buyItServers.hashCode) +
    (displayShowmore == null ? 0 : displayShowmore!.hashCode) +
    (custDiscount == null ? 0 : custDiscount!.hashCode);

  @override
  String toString() => 'ServerOrderGetResponse[formValues=$formValues, configIds=$configIds, cpu=$cpu, cpuLi=$cpuLi, configLi=$configLi, frequency=$frequency, currency=$currency, country=$country, step=$step, fieldLabel=$fieldLabel, cpuCores=$cpuCores, currencySymbol=$currencySymbol, custid=$custid, ima=$ima, regions=$regions, assetServers=$assetServers, buyItServers=$buyItServers, displayShowmore=$displayShowmore, custDiscount=$custDiscount]';

  Map<String, dynamic> toJson() {
    final json = <String, dynamic>{};
      json[r'form_values'] = this.formValues;
      json[r'config_ids'] = this.configIds;
      json[r'cpu'] = this.cpu;
      json[r'cpu_li'] = this.cpuLi;
      json[r'config_li'] = this.configLi;
      json[r'frequency'] = this.frequency;
      json[r'currency'] = this.currency;
      json[r'country'] = this.country;
      json[r'step'] = this.step;
      json[r'field_label'] = this.fieldLabel;
      json[r'cpu_cores'] = this.cpuCores;
    if (this.currencySymbol != null) {
      json[r'currencySymbol'] = this.currencySymbol;
    } else {
      json[r'currencySymbol'] = null;
    }
    if (this.custid != null) {
      json[r'custid'] = this.custid;
    } else {
      json[r'custid'] = null;
    }
    if (this.ima != null) {
      json[r'ima'] = this.ima;
    } else {
      json[r'ima'] = null;
    }
      json[r'regions'] = this.regions;
      json[r'asset_servers'] = this.assetServers;
      json[r'buy_it_servers'] = this.buyItServers;
    if (this.displayShowmore != null) {
      json[r'display_showmore'] = this.displayShowmore;
    } else {
      json[r'display_showmore'] = null;
    }
    if (this.custDiscount != null) {
      json[r'cust_discount'] = this.custDiscount;
    } else {
      json[r'cust_discount'] = null;
    }
    return json;
  }

  /// Returns a new [ServerOrderGetResponse] instance and imports its values from
  /// [value] if it's a [Map], null otherwise.
  // ignore: prefer_constructors_over_static_methods
  static ServerOrderGetResponse? fromJson(dynamic value) {
    if (value is Map) {
      final json = value.cast<String, dynamic>();

      // Ensure that the map contains the required keys.
      // Note 1: the values aren't checked for validity beyond being non-null.
      // Note 2: this code is stripped in release mode!
      assert(() {
        assert(json.containsKey(r'form_values'), 'Required key "ServerOrderGetResponse[form_values]" is missing from JSON.');
        assert(json[r'form_values'] != null, 'Required key "ServerOrderGetResponse[form_values]" has a null value in JSON.');
        assert(json.containsKey(r'config_ids'), 'Required key "ServerOrderGetResponse[config_ids]" is missing from JSON.');
        assert(json[r'config_ids'] != null, 'Required key "ServerOrderGetResponse[config_ids]" has a null value in JSON.');
        assert(json.containsKey(r'cpu'), 'Required key "ServerOrderGetResponse[cpu]" is missing from JSON.');
        assert(json[r'cpu'] != null, 'Required key "ServerOrderGetResponse[cpu]" has a null value in JSON.');
        assert(json.containsKey(r'cpu_li'), 'Required key "ServerOrderGetResponse[cpu_li]" is missing from JSON.');
        assert(json[r'cpu_li'] != null, 'Required key "ServerOrderGetResponse[cpu_li]" has a null value in JSON.');
        assert(json.containsKey(r'config_li'), 'Required key "ServerOrderGetResponse[config_li]" is missing from JSON.');
        assert(json[r'config_li'] != null, 'Required key "ServerOrderGetResponse[config_li]" has a null value in JSON.');
        assert(json.containsKey(r'frequency'), 'Required key "ServerOrderGetResponse[frequency]" is missing from JSON.');
        assert(json[r'frequency'] != null, 'Required key "ServerOrderGetResponse[frequency]" has a null value in JSON.');
        assert(json.containsKey(r'currency'), 'Required key "ServerOrderGetResponse[currency]" is missing from JSON.');
        assert(json[r'currency'] != null, 'Required key "ServerOrderGetResponse[currency]" has a null value in JSON.');
        assert(json.containsKey(r'country'), 'Required key "ServerOrderGetResponse[country]" is missing from JSON.');
        assert(json[r'country'] != null, 'Required key "ServerOrderGetResponse[country]" has a null value in JSON.');
        assert(json.containsKey(r'step'), 'Required key "ServerOrderGetResponse[step]" is missing from JSON.');
        assert(json[r'step'] != null, 'Required key "ServerOrderGetResponse[step]" has a null value in JSON.');
        return true;
      }());

      return ServerOrderGetResponse(
        formValues: FormValues.fromJson(json[r'form_values'])!,
        configIds: ConfigIds.fromJson(json[r'config_ids'])!,
        cpu: mapValueOfType<int>(json, r'cpu')!,
        cpuLi: Cpu.mapFromJson(json[r'cpu_li']),
        configLi: ConfigLists.fromJson(json[r'config_li'])!,
        frequency: mapValueOfType<int>(json, r'frequency')!,
        currency: mapValueOfType<String>(json, r'currency')!,
        country: mapValueOfType<String>(json, r'country')!,
        step: mapValueOfType<String>(json, r'step')!,
        fieldLabel: FieldLabel.mapFromJson(json[r'field_label']),
        cpuCores: CpuWithDefaults.mapFromJson(json[r'cpu_cores']),
        currencySymbol: mapValueOfType<String>(json, r'currencySymbol'),
        custid: mapValueOfType<int>(json, r'custid'),
        ima: mapValueOfType<String>(json, r'ima'),
        regions: Region.listFromJson(json[r'regions']),
        assetServers: AssetServer.listFromJson(json[r'asset_servers']),
        buyItServers: json[r'buy_it_servers'] is Iterable
            ? (json[r'buy_it_servers'] as Iterable).cast<Object>().toList(growable: false)
            : const [],
        displayShowmore: mapValueOfType<String>(json, r'display_showmore'),
        custDiscount: num.parse('${json[r'cust_discount']}'),
      );
    }
    return null;
  }

  static List<ServerOrderGetResponse> listFromJson(dynamic json, {bool growable = false,}) {
    final result = <ServerOrderGetResponse>[];
    if (json is List && json.isNotEmpty) {
      for (final row in json) {
        final value = ServerOrderGetResponse.fromJson(row);
        if (value != null) {
          result.add(value);
        }
      }
    }
    return result.toList(growable: growable);
  }

  static Map<String, ServerOrderGetResponse> mapFromJson(dynamic json) {
    final map = <String, ServerOrderGetResponse>{};
    if (json is Map && json.isNotEmpty) {
      json = json.cast<String, dynamic>(); // ignore: parameter_assignments
      for (final entry in json.entries) {
        final value = ServerOrderGetResponse.fromJson(entry.value);
        if (value != null) {
          map[entry.key] = value;
        }
      }
    }
    return map;
  }

  // maps a json object with a list of ServerOrderGetResponse-objects as value to a dart map
  static Map<String, List<ServerOrderGetResponse>> mapListFromJson(dynamic json, {bool growable = false,}) {
    final map = <String, List<ServerOrderGetResponse>>{};
    if (json is Map && json.isNotEmpty) {
      // ignore: parameter_assignments
      json = json.cast<String, dynamic>();
      for (final entry in json.entries) {
        map[entry.key] = ServerOrderGetResponse.listFromJson(entry.value, growable: growable,);
      }
    }
    return map;
  }

  /// The list of required keys that must be present in a JSON.
  static const requiredKeys = <String>{
    'form_values',
    'config_ids',
    'cpu',
    'cpu_li',
    'config_li',
    'frequency',
    'currency',
    'country',
    'step',
  };
}

