//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/account_info_max_mind_response_risk_score.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'account_info_max_mind_response.g.dart';

/// MaxMind fraud detection scoring data for a credit card transaction.
///
/// Properties:
/// * [distance] 
/// * [countryMatch] 
/// * [countryCode] 
/// * [freeMail] 
/// * [anonymousProxy] 
/// * [score] 
/// * [binMatch] 
/// * [binCountry] 
/// * [err] 
/// * [proxyScore] 
/// * [ipRegion] 
/// * [ipCity] 
/// * [ipLatitude] 
/// * [ipLongitude] 
/// * [binName] 
/// * [ipIsp] 
/// * [ipOrg] 
/// * [binNameMatch] 
/// * [binPhoneMatch] 
/// * [binPhone] 
/// * [custPhoneInBillingLoc] 
/// * [highRiskCountry] 
/// * [queriesRemaining] 
/// * [cityPostalMatch] 
/// * [shipCityPostalMatch] 
/// * [maxmindID] 
/// * [ipAsnum] 
/// * [ipUserType] 
/// * [ipCountryConf] 
/// * [ipRegionConf] 
/// * [ipCityConf] 
/// * [ipPostalCode] 
/// * [ipPostalConf] 
/// * [ipAccuracyRadius] 
/// * [ipNetSpeedCell] 
/// * [ipMetroCode] 
/// * [ipAreaCode] 
/// * [ipTimeZone] 
/// * [ipRegionName] 
/// * [ipDomain] 
/// * [ipCountryName] 
/// * [ipContinentCode] 
/// * [ipCorporateProxy] 
/// * [carderEmail] 
/// * [highRiskUsername] 
/// * [highRiskPassword] 
/// * [riskScore] 
/// * [isTransProxy] 
/// * [prepaid] 
/// * [minfraudVersion] 
/// * [serviceLevel] 
/// * [explanation] 
/// * [femaleName] 
@BuiltValue()
abstract class AccountInfoMaxMindResponse implements Built<AccountInfoMaxMindResponse, AccountInfoMaxMindResponseBuilder> {
  @BuiltValueField(wireName: r'distance')
  String? get distance;

  @BuiltValueField(wireName: r'countryMatch')
  String? get countryMatch;

  @BuiltValueField(wireName: r'countryCode')
  String? get countryCode;

  @BuiltValueField(wireName: r'freeMail')
  String? get freeMail;

  @BuiltValueField(wireName: r'anonymousProxy')
  String? get anonymousProxy;

  @BuiltValueField(wireName: r'score')
  String? get score;

  @BuiltValueField(wireName: r'binMatch')
  String? get binMatch;

  @BuiltValueField(wireName: r'binCountry')
  String? get binCountry;

  @BuiltValueField(wireName: r'err')
  String? get err;

  @BuiltValueField(wireName: r'proxyScore')
  String? get proxyScore;

  @BuiltValueField(wireName: r'ip_region')
  String? get ipRegion;

  @BuiltValueField(wireName: r'ip_city')
  String? get ipCity;

  @BuiltValueField(wireName: r'ip_latitude')
  String? get ipLatitude;

  @BuiltValueField(wireName: r'ip_longitude')
  String? get ipLongitude;

  @BuiltValueField(wireName: r'binName')
  String? get binName;

  @BuiltValueField(wireName: r'ip_isp')
  String? get ipIsp;

  @BuiltValueField(wireName: r'ip_org')
  String? get ipOrg;

  @BuiltValueField(wireName: r'binNameMatch')
  String? get binNameMatch;

  @BuiltValueField(wireName: r'binPhoneMatch')
  String? get binPhoneMatch;

  @BuiltValueField(wireName: r'binPhone')
  String? get binPhone;

  @BuiltValueField(wireName: r'custPhoneInBillingLoc')
  String? get custPhoneInBillingLoc;

  @BuiltValueField(wireName: r'highRiskCountry')
  String? get highRiskCountry;

  @BuiltValueField(wireName: r'queriesRemaining')
  String? get queriesRemaining;

  @BuiltValueField(wireName: r'cityPostalMatch')
  String? get cityPostalMatch;

  @BuiltValueField(wireName: r'shipCityPostalMatch')
  String? get shipCityPostalMatch;

  @BuiltValueField(wireName: r'maxmindID')
  String? get maxmindID;

  @BuiltValueField(wireName: r'ip_asnum')
  String? get ipAsnum;

  @BuiltValueField(wireName: r'ip_userType')
  String? get ipUserType;

  @BuiltValueField(wireName: r'ip_countryConf')
  String? get ipCountryConf;

  @BuiltValueField(wireName: r'ip_regionConf')
  String? get ipRegionConf;

  @BuiltValueField(wireName: r'ip_cityConf')
  String? get ipCityConf;

  @BuiltValueField(wireName: r'ip_postalCode')
  String? get ipPostalCode;

  @BuiltValueField(wireName: r'ip_postalConf')
  String? get ipPostalConf;

  @BuiltValueField(wireName: r'ip_accuracyRadius')
  String? get ipAccuracyRadius;

  @BuiltValueField(wireName: r'ip_netSpeedCell')
  String? get ipNetSpeedCell;

  @BuiltValueField(wireName: r'ip_metroCode')
  String? get ipMetroCode;

  @BuiltValueField(wireName: r'ip_areaCode')
  String? get ipAreaCode;

  @BuiltValueField(wireName: r'ip_timeZone')
  String? get ipTimeZone;

  @BuiltValueField(wireName: r'ip_regionName')
  String? get ipRegionName;

  @BuiltValueField(wireName: r'ip_domain')
  String? get ipDomain;

  @BuiltValueField(wireName: r'ip_countryName')
  String? get ipCountryName;

  @BuiltValueField(wireName: r'ip_continentCode')
  String? get ipContinentCode;

  @BuiltValueField(wireName: r'ip_corporateProxy')
  String? get ipCorporateProxy;

  @BuiltValueField(wireName: r'carderEmail')
  String? get carderEmail;

  @BuiltValueField(wireName: r'highRiskUsername')
  String? get highRiskUsername;

  @BuiltValueField(wireName: r'highRiskPassword')
  String? get highRiskPassword;

  @BuiltValueField(wireName: r'riskScore')
  AccountInfoMaxMindResponseRiskScore? get riskScore;

  @BuiltValueField(wireName: r'isTransProxy')
  String? get isTransProxy;

  @BuiltValueField(wireName: r'prepaid')
  String? get prepaid;

  @BuiltValueField(wireName: r'minfraud_version')
  String? get minfraudVersion;

  @BuiltValueField(wireName: r'service_level')
  String? get serviceLevel;

  @BuiltValueField(wireName: r'explanation')
  String? get explanation;

  @BuiltValueField(wireName: r'female_name')
  String? get femaleName;

  AccountInfoMaxMindResponse._();

  factory AccountInfoMaxMindResponse([void updates(AccountInfoMaxMindResponseBuilder b)]) = _$AccountInfoMaxMindResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(AccountInfoMaxMindResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<AccountInfoMaxMindResponse> get serializer => _$AccountInfoMaxMindResponseSerializer();
}

class _$AccountInfoMaxMindResponseSerializer implements PrimitiveSerializer<AccountInfoMaxMindResponse> {
  @override
  final Iterable<Type> types = const [AccountInfoMaxMindResponse, _$AccountInfoMaxMindResponse];

  @override
  final String wireName = r'AccountInfoMaxMindResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    AccountInfoMaxMindResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.distance != null) {
      yield r'distance';
      yield serializers.serialize(
        object.distance,
        specifiedType: const FullType(String),
      );
    }
    if (object.countryMatch != null) {
      yield r'countryMatch';
      yield serializers.serialize(
        object.countryMatch,
        specifiedType: const FullType(String),
      );
    }
    if (object.countryCode != null) {
      yield r'countryCode';
      yield serializers.serialize(
        object.countryCode,
        specifiedType: const FullType(String),
      );
    }
    if (object.freeMail != null) {
      yield r'freeMail';
      yield serializers.serialize(
        object.freeMail,
        specifiedType: const FullType(String),
      );
    }
    if (object.anonymousProxy != null) {
      yield r'anonymousProxy';
      yield serializers.serialize(
        object.anonymousProxy,
        specifiedType: const FullType(String),
      );
    }
    if (object.score != null) {
      yield r'score';
      yield serializers.serialize(
        object.score,
        specifiedType: const FullType(String),
      );
    }
    if (object.binMatch != null) {
      yield r'binMatch';
      yield serializers.serialize(
        object.binMatch,
        specifiedType: const FullType(String),
      );
    }
    if (object.binCountry != null) {
      yield r'binCountry';
      yield serializers.serialize(
        object.binCountry,
        specifiedType: const FullType(String),
      );
    }
    if (object.err != null) {
      yield r'err';
      yield serializers.serialize(
        object.err,
        specifiedType: const FullType(String),
      );
    }
    if (object.proxyScore != null) {
      yield r'proxyScore';
      yield serializers.serialize(
        object.proxyScore,
        specifiedType: const FullType(String),
      );
    }
    if (object.ipRegion != null) {
      yield r'ip_region';
      yield serializers.serialize(
        object.ipRegion,
        specifiedType: const FullType(String),
      );
    }
    if (object.ipCity != null) {
      yield r'ip_city';
      yield serializers.serialize(
        object.ipCity,
        specifiedType: const FullType(String),
      );
    }
    if (object.ipLatitude != null) {
      yield r'ip_latitude';
      yield serializers.serialize(
        object.ipLatitude,
        specifiedType: const FullType(String),
      );
    }
    if (object.ipLongitude != null) {
      yield r'ip_longitude';
      yield serializers.serialize(
        object.ipLongitude,
        specifiedType: const FullType(String),
      );
    }
    if (object.binName != null) {
      yield r'binName';
      yield serializers.serialize(
        object.binName,
        specifiedType: const FullType(String),
      );
    }
    if (object.ipIsp != null) {
      yield r'ip_isp';
      yield serializers.serialize(
        object.ipIsp,
        specifiedType: const FullType(String),
      );
    }
    if (object.ipOrg != null) {
      yield r'ip_org';
      yield serializers.serialize(
        object.ipOrg,
        specifiedType: const FullType(String),
      );
    }
    if (object.binNameMatch != null) {
      yield r'binNameMatch';
      yield serializers.serialize(
        object.binNameMatch,
        specifiedType: const FullType(String),
      );
    }
    if (object.binPhoneMatch != null) {
      yield r'binPhoneMatch';
      yield serializers.serialize(
        object.binPhoneMatch,
        specifiedType: const FullType(String),
      );
    }
    if (object.binPhone != null) {
      yield r'binPhone';
      yield serializers.serialize(
        object.binPhone,
        specifiedType: const FullType(String),
      );
    }
    if (object.custPhoneInBillingLoc != null) {
      yield r'custPhoneInBillingLoc';
      yield serializers.serialize(
        object.custPhoneInBillingLoc,
        specifiedType: const FullType(String),
      );
    }
    if (object.highRiskCountry != null) {
      yield r'highRiskCountry';
      yield serializers.serialize(
        object.highRiskCountry,
        specifiedType: const FullType(String),
      );
    }
    if (object.queriesRemaining != null) {
      yield r'queriesRemaining';
      yield serializers.serialize(
        object.queriesRemaining,
        specifiedType: const FullType(String),
      );
    }
    if (object.cityPostalMatch != null) {
      yield r'cityPostalMatch';
      yield serializers.serialize(
        object.cityPostalMatch,
        specifiedType: const FullType(String),
      );
    }
    if (object.shipCityPostalMatch != null) {
      yield r'shipCityPostalMatch';
      yield serializers.serialize(
        object.shipCityPostalMatch,
        specifiedType: const FullType(String),
      );
    }
    if (object.maxmindID != null) {
      yield r'maxmindID';
      yield serializers.serialize(
        object.maxmindID,
        specifiedType: const FullType(String),
      );
    }
    if (object.ipAsnum != null) {
      yield r'ip_asnum';
      yield serializers.serialize(
        object.ipAsnum,
        specifiedType: const FullType(String),
      );
    }
    if (object.ipUserType != null) {
      yield r'ip_userType';
      yield serializers.serialize(
        object.ipUserType,
        specifiedType: const FullType(String),
      );
    }
    if (object.ipCountryConf != null) {
      yield r'ip_countryConf';
      yield serializers.serialize(
        object.ipCountryConf,
        specifiedType: const FullType(String),
      );
    }
    if (object.ipRegionConf != null) {
      yield r'ip_regionConf';
      yield serializers.serialize(
        object.ipRegionConf,
        specifiedType: const FullType(String),
      );
    }
    if (object.ipCityConf != null) {
      yield r'ip_cityConf';
      yield serializers.serialize(
        object.ipCityConf,
        specifiedType: const FullType(String),
      );
    }
    if (object.ipPostalCode != null) {
      yield r'ip_postalCode';
      yield serializers.serialize(
        object.ipPostalCode,
        specifiedType: const FullType(String),
      );
    }
    if (object.ipPostalConf != null) {
      yield r'ip_postalConf';
      yield serializers.serialize(
        object.ipPostalConf,
        specifiedType: const FullType(String),
      );
    }
    if (object.ipAccuracyRadius != null) {
      yield r'ip_accuracyRadius';
      yield serializers.serialize(
        object.ipAccuracyRadius,
        specifiedType: const FullType(String),
      );
    }
    if (object.ipNetSpeedCell != null) {
      yield r'ip_netSpeedCell';
      yield serializers.serialize(
        object.ipNetSpeedCell,
        specifiedType: const FullType(String),
      );
    }
    if (object.ipMetroCode != null) {
      yield r'ip_metroCode';
      yield serializers.serialize(
        object.ipMetroCode,
        specifiedType: const FullType(String),
      );
    }
    if (object.ipAreaCode != null) {
      yield r'ip_areaCode';
      yield serializers.serialize(
        object.ipAreaCode,
        specifiedType: const FullType(String),
      );
    }
    if (object.ipTimeZone != null) {
      yield r'ip_timeZone';
      yield serializers.serialize(
        object.ipTimeZone,
        specifiedType: const FullType(String),
      );
    }
    if (object.ipRegionName != null) {
      yield r'ip_regionName';
      yield serializers.serialize(
        object.ipRegionName,
        specifiedType: const FullType(String),
      );
    }
    if (object.ipDomain != null) {
      yield r'ip_domain';
      yield serializers.serialize(
        object.ipDomain,
        specifiedType: const FullType(String),
      );
    }
    if (object.ipCountryName != null) {
      yield r'ip_countryName';
      yield serializers.serialize(
        object.ipCountryName,
        specifiedType: const FullType(String),
      );
    }
    if (object.ipContinentCode != null) {
      yield r'ip_continentCode';
      yield serializers.serialize(
        object.ipContinentCode,
        specifiedType: const FullType(String),
      );
    }
    if (object.ipCorporateProxy != null) {
      yield r'ip_corporateProxy';
      yield serializers.serialize(
        object.ipCorporateProxy,
        specifiedType: const FullType(String),
      );
    }
    if (object.carderEmail != null) {
      yield r'carderEmail';
      yield serializers.serialize(
        object.carderEmail,
        specifiedType: const FullType(String),
      );
    }
    if (object.highRiskUsername != null) {
      yield r'highRiskUsername';
      yield serializers.serialize(
        object.highRiskUsername,
        specifiedType: const FullType(String),
      );
    }
    if (object.highRiskPassword != null) {
      yield r'highRiskPassword';
      yield serializers.serialize(
        object.highRiskPassword,
        specifiedType: const FullType(String),
      );
    }
    if (object.riskScore != null) {
      yield r'riskScore';
      yield serializers.serialize(
        object.riskScore,
        specifiedType: const FullType(AccountInfoMaxMindResponseRiskScore),
      );
    }
    if (object.isTransProxy != null) {
      yield r'isTransProxy';
      yield serializers.serialize(
        object.isTransProxy,
        specifiedType: const FullType(String),
      );
    }
    if (object.prepaid != null) {
      yield r'prepaid';
      yield serializers.serialize(
        object.prepaid,
        specifiedType: const FullType(String),
      );
    }
    if (object.minfraudVersion != null) {
      yield r'minfraud_version';
      yield serializers.serialize(
        object.minfraudVersion,
        specifiedType: const FullType(String),
      );
    }
    if (object.serviceLevel != null) {
      yield r'service_level';
      yield serializers.serialize(
        object.serviceLevel,
        specifiedType: const FullType(String),
      );
    }
    if (object.explanation != null) {
      yield r'explanation';
      yield serializers.serialize(
        object.explanation,
        specifiedType: const FullType(String),
      );
    }
    if (object.femaleName != null) {
      yield r'female_name';
      yield serializers.serialize(
        object.femaleName,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    AccountInfoMaxMindResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required AccountInfoMaxMindResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'distance':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.distance = valueDes;
          break;
        case r'countryMatch':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.countryMatch = valueDes;
          break;
        case r'countryCode':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.countryCode = valueDes;
          break;
        case r'freeMail':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.freeMail = valueDes;
          break;
        case r'anonymousProxy':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.anonymousProxy = valueDes;
          break;
        case r'score':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.score = valueDes;
          break;
        case r'binMatch':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.binMatch = valueDes;
          break;
        case r'binCountry':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.binCountry = valueDes;
          break;
        case r'err':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.err = valueDes;
          break;
        case r'proxyScore':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.proxyScore = valueDes;
          break;
        case r'ip_region':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipRegion = valueDes;
          break;
        case r'ip_city':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipCity = valueDes;
          break;
        case r'ip_latitude':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipLatitude = valueDes;
          break;
        case r'ip_longitude':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipLongitude = valueDes;
          break;
        case r'binName':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.binName = valueDes;
          break;
        case r'ip_isp':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipIsp = valueDes;
          break;
        case r'ip_org':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipOrg = valueDes;
          break;
        case r'binNameMatch':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.binNameMatch = valueDes;
          break;
        case r'binPhoneMatch':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.binPhoneMatch = valueDes;
          break;
        case r'binPhone':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.binPhone = valueDes;
          break;
        case r'custPhoneInBillingLoc':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.custPhoneInBillingLoc = valueDes;
          break;
        case r'highRiskCountry':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.highRiskCountry = valueDes;
          break;
        case r'queriesRemaining':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.queriesRemaining = valueDes;
          break;
        case r'cityPostalMatch':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.cityPostalMatch = valueDes;
          break;
        case r'shipCityPostalMatch':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.shipCityPostalMatch = valueDes;
          break;
        case r'maxmindID':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.maxmindID = valueDes;
          break;
        case r'ip_asnum':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipAsnum = valueDes;
          break;
        case r'ip_userType':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipUserType = valueDes;
          break;
        case r'ip_countryConf':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipCountryConf = valueDes;
          break;
        case r'ip_regionConf':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipRegionConf = valueDes;
          break;
        case r'ip_cityConf':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipCityConf = valueDes;
          break;
        case r'ip_postalCode':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipPostalCode = valueDes;
          break;
        case r'ip_postalConf':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipPostalConf = valueDes;
          break;
        case r'ip_accuracyRadius':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipAccuracyRadius = valueDes;
          break;
        case r'ip_netSpeedCell':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipNetSpeedCell = valueDes;
          break;
        case r'ip_metroCode':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipMetroCode = valueDes;
          break;
        case r'ip_areaCode':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipAreaCode = valueDes;
          break;
        case r'ip_timeZone':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipTimeZone = valueDes;
          break;
        case r'ip_regionName':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipRegionName = valueDes;
          break;
        case r'ip_domain':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipDomain = valueDes;
          break;
        case r'ip_countryName':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipCountryName = valueDes;
          break;
        case r'ip_continentCode':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipContinentCode = valueDes;
          break;
        case r'ip_corporateProxy':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipCorporateProxy = valueDes;
          break;
        case r'carderEmail':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.carderEmail = valueDes;
          break;
        case r'highRiskUsername':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.highRiskUsername = valueDes;
          break;
        case r'highRiskPassword':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.highRiskPassword = valueDes;
          break;
        case r'riskScore':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(AccountInfoMaxMindResponseRiskScore),
          ) as AccountInfoMaxMindResponseRiskScore;
          result.riskScore.replace(valueDes);
          break;
        case r'isTransProxy':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.isTransProxy = valueDes;
          break;
        case r'prepaid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.prepaid = valueDes;
          break;
        case r'minfraud_version':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.minfraudVersion = valueDes;
          break;
        case r'service_level':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serviceLevel = valueDes;
          break;
        case r'explanation':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.explanation = valueDes;
          break;
        case r'female_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.femaleName = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  AccountInfoMaxMindResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = AccountInfoMaxMindResponseBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    final unhandled = <Object?>[];
    _deserializeProperties(
      serializers,
      serialized,
      specifiedType: specifiedType,
      serializedList: serializedList,
      unhandled: unhandled,
      result: result,
    );
    return result.build();
  }
}

