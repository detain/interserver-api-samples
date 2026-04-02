//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_service_info.g.dart';

/// ServerServiceInfo
///
/// Properties:
/// * [serverId] - The ID of the server.
/// * [serverHostname] - The hostname of the server.
/// * [serverCustid] - The customer ID associated with the server.
/// * [serverType] - The type of the server.
/// * [serverCurrency] - The currency used for billing.
/// * [serverOrderDate] - The date when the server was ordered.
/// * [serverInvoice] - The invoice number for the server.
/// * [serverCoupon] - The coupon associated with the server.
/// * [serverStatus] - The status of the server.
/// * [serverRoot] - The root of the server.
/// * [serverDedicatedTag] - The dedicated tag of the server.
/// * [serverCustomTag] - The custom tag of the server.
/// * [serverComment] - Comments related to the server.
/// * [serverInitialBill] - The initial billing amount for the server.
/// * [serverHardware] - The hardware information of the server.
/// * [serverIps] - The number of IPs associated with the server.
/// * [serverMonthlyBill] - The monthly billing amount for the server.
/// * [serverSetup] - The setup status of the server.
/// * [serverDiscount] - Discount information for the server.
/// * [serverRep] - The reputation of the server.
/// * [serverDate] - The date related to the server.
/// * [serverTotalCost] - The total cost of the server.
/// * [serverLocation] - The location of the server.
/// * [serverHardwareOrdered] - The ordered hardware for the server.
/// * [serverBilled] - The billed amount for the server.
/// * [serverWelcomeEmail] - Indicates whether a welcome email was sent.
/// * [serverDedicatedCpu] - The number of dedicated CPUs for the server.
/// * [serverDedicatedMemory] - The amount of dedicated memory for the server.
/// * [serverDedicatedHd1] - The size of the first dedicated hard drive.
/// * [serverDedicatedHd2] - The size of the second dedicated hard drive.
/// * [serverDedicatedBandwidth] - The bandwidth of the server.
/// * [serverDedicatedIps] - The number of dedicated IPs for the server.
/// * [serverDedicatedOs] - The operating system of the server.
/// * [serverDedicatedCp] - The control panel of the server.
/// * [serverDedicatedRaid] - The RAID configuration of the server.
/// * [serverExtra] - Additional information about the server.
@BuiltValue()
abstract class ServerServiceInfo implements Built<ServerServiceInfo, ServerServiceInfoBuilder> {
  /// The ID of the server.
  @BuiltValueField(wireName: r'server_id')
  String? get serverId;

  /// The hostname of the server.
  @BuiltValueField(wireName: r'server_hostname')
  String? get serverHostname;

  /// The customer ID associated with the server.
  @BuiltValueField(wireName: r'server_custid')
  String? get serverCustid;

  /// The type of the server.
  @BuiltValueField(wireName: r'server_type')
  String? get serverType;

  /// The currency used for billing.
  @BuiltValueField(wireName: r'server_currency')
  String? get serverCurrency;

  /// The date when the server was ordered.
  @BuiltValueField(wireName: r'server_order_date')
  String? get serverOrderDate;

  /// The invoice number for the server.
  @BuiltValueField(wireName: r'server_invoice')
  String? get serverInvoice;

  /// The coupon associated with the server.
  @BuiltValueField(wireName: r'server_coupon')
  String? get serverCoupon;

  /// The status of the server.
  @BuiltValueField(wireName: r'server_status')
  String? get serverStatus;

  /// The root of the server.
  @BuiltValueField(wireName: r'server_root')
  String? get serverRoot;

  /// The dedicated tag of the server.
  @BuiltValueField(wireName: r'server_dedicated_tag')
  String? get serverDedicatedTag;

  /// The custom tag of the server.
  @BuiltValueField(wireName: r'server_custom_tag')
  String? get serverCustomTag;

  /// Comments related to the server.
  @BuiltValueField(wireName: r'server_comment')
  String? get serverComment;

  /// The initial billing amount for the server.
  @BuiltValueField(wireName: r'server_initial_bill')
  String? get serverInitialBill;

  /// The hardware information of the server.
  @BuiltValueField(wireName: r'server_hardware')
  String? get serverHardware;

  /// The number of IPs associated with the server.
  @BuiltValueField(wireName: r'server_ips')
  String? get serverIps;

  /// The monthly billing amount for the server.
  @BuiltValueField(wireName: r'server_monthly_bill')
  String? get serverMonthlyBill;

  /// The setup status of the server.
  @BuiltValueField(wireName: r'server_setup')
  String? get serverSetup;

  /// Discount information for the server.
  @BuiltValueField(wireName: r'server_discount')
  String? get serverDiscount;

  /// The reputation of the server.
  @BuiltValueField(wireName: r'server_rep')
  String? get serverRep;

  /// The date related to the server.
  @BuiltValueField(wireName: r'server_date')
  String? get serverDate;

  /// The total cost of the server.
  @BuiltValueField(wireName: r'server_total_cost')
  String? get serverTotalCost;

  /// The location of the server.
  @BuiltValueField(wireName: r'server_location')
  String? get serverLocation;

  /// The ordered hardware for the server.
  @BuiltValueField(wireName: r'server_hardware_ordered')
  String? get serverHardwareOrdered;

  /// The billed amount for the server.
  @BuiltValueField(wireName: r'server_billed')
  String? get serverBilled;

  /// Indicates whether a welcome email was sent.
  @BuiltValueField(wireName: r'server_welcome_email')
  String? get serverWelcomeEmail;

  /// The number of dedicated CPUs for the server.
  @BuiltValueField(wireName: r'server_dedicated_cpu')
  String? get serverDedicatedCpu;

  /// The amount of dedicated memory for the server.
  @BuiltValueField(wireName: r'server_dedicated_memory')
  String? get serverDedicatedMemory;

  /// The size of the first dedicated hard drive.
  @BuiltValueField(wireName: r'server_dedicated_hd1')
  String? get serverDedicatedHd1;

  /// The size of the second dedicated hard drive.
  @BuiltValueField(wireName: r'server_dedicated_hd2')
  String? get serverDedicatedHd2;

  /// The bandwidth of the server.
  @BuiltValueField(wireName: r'server_dedicated_bandwidth')
  String? get serverDedicatedBandwidth;

  /// The number of dedicated IPs for the server.
  @BuiltValueField(wireName: r'server_dedicated_ips')
  String? get serverDedicatedIps;

  /// The operating system of the server.
  @BuiltValueField(wireName: r'server_dedicated_os')
  String? get serverDedicatedOs;

  /// The control panel of the server.
  @BuiltValueField(wireName: r'server_dedicated_cp')
  String? get serverDedicatedCp;

  /// The RAID configuration of the server.
  @BuiltValueField(wireName: r'server_dedicated_raid')
  String? get serverDedicatedRaid;

  /// Additional information about the server.
  @BuiltValueField(wireName: r'server_extra')
  String? get serverExtra;

  ServerServiceInfo._();

  factory ServerServiceInfo([void updates(ServerServiceInfoBuilder b)]) = _$ServerServiceInfo;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerServiceInfoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerServiceInfo> get serializer => _$ServerServiceInfoSerializer();
}

class _$ServerServiceInfoSerializer implements PrimitiveSerializer<ServerServiceInfo> {
  @override
  final Iterable<Type> types = const [ServerServiceInfo, _$ServerServiceInfo];

  @override
  final String wireName = r'ServerServiceInfo';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerServiceInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.serverId != null) {
      yield r'server_id';
      yield serializers.serialize(
        object.serverId,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverHostname != null) {
      yield r'server_hostname';
      yield serializers.serialize(
        object.serverHostname,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverCustid != null) {
      yield r'server_custid';
      yield serializers.serialize(
        object.serverCustid,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverType != null) {
      yield r'server_type';
      yield serializers.serialize(
        object.serverType,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverCurrency != null) {
      yield r'server_currency';
      yield serializers.serialize(
        object.serverCurrency,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverOrderDate != null) {
      yield r'server_order_date';
      yield serializers.serialize(
        object.serverOrderDate,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverInvoice != null) {
      yield r'server_invoice';
      yield serializers.serialize(
        object.serverInvoice,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverCoupon != null) {
      yield r'server_coupon';
      yield serializers.serialize(
        object.serverCoupon,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverStatus != null) {
      yield r'server_status';
      yield serializers.serialize(
        object.serverStatus,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverRoot != null) {
      yield r'server_root';
      yield serializers.serialize(
        object.serverRoot,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverDedicatedTag != null) {
      yield r'server_dedicated_tag';
      yield serializers.serialize(
        object.serverDedicatedTag,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverCustomTag != null) {
      yield r'server_custom_tag';
      yield serializers.serialize(
        object.serverCustomTag,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverComment != null) {
      yield r'server_comment';
      yield serializers.serialize(
        object.serverComment,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverInitialBill != null) {
      yield r'server_initial_bill';
      yield serializers.serialize(
        object.serverInitialBill,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverHardware != null) {
      yield r'server_hardware';
      yield serializers.serialize(
        object.serverHardware,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverIps != null) {
      yield r'server_ips';
      yield serializers.serialize(
        object.serverIps,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverMonthlyBill != null) {
      yield r'server_monthly_bill';
      yield serializers.serialize(
        object.serverMonthlyBill,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverSetup != null) {
      yield r'server_setup';
      yield serializers.serialize(
        object.serverSetup,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverDiscount != null) {
      yield r'server_discount';
      yield serializers.serialize(
        object.serverDiscount,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverRep != null) {
      yield r'server_rep';
      yield serializers.serialize(
        object.serverRep,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverDate != null) {
      yield r'server_date';
      yield serializers.serialize(
        object.serverDate,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverTotalCost != null) {
      yield r'server_total_cost';
      yield serializers.serialize(
        object.serverTotalCost,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverLocation != null) {
      yield r'server_location';
      yield serializers.serialize(
        object.serverLocation,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverHardwareOrdered != null) {
      yield r'server_hardware_ordered';
      yield serializers.serialize(
        object.serverHardwareOrdered,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverBilled != null) {
      yield r'server_billed';
      yield serializers.serialize(
        object.serverBilled,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverWelcomeEmail != null) {
      yield r'server_welcome_email';
      yield serializers.serialize(
        object.serverWelcomeEmail,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverDedicatedCpu != null) {
      yield r'server_dedicated_cpu';
      yield serializers.serialize(
        object.serverDedicatedCpu,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverDedicatedMemory != null) {
      yield r'server_dedicated_memory';
      yield serializers.serialize(
        object.serverDedicatedMemory,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverDedicatedHd1 != null) {
      yield r'server_dedicated_hd1';
      yield serializers.serialize(
        object.serverDedicatedHd1,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverDedicatedHd2 != null) {
      yield r'server_dedicated_hd2';
      yield serializers.serialize(
        object.serverDedicatedHd2,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverDedicatedBandwidth != null) {
      yield r'server_dedicated_bandwidth';
      yield serializers.serialize(
        object.serverDedicatedBandwidth,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverDedicatedIps != null) {
      yield r'server_dedicated_ips';
      yield serializers.serialize(
        object.serverDedicatedIps,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverDedicatedOs != null) {
      yield r'server_dedicated_os';
      yield serializers.serialize(
        object.serverDedicatedOs,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverDedicatedCp != null) {
      yield r'server_dedicated_cp';
      yield serializers.serialize(
        object.serverDedicatedCp,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverDedicatedRaid != null) {
      yield r'server_dedicated_raid';
      yield serializers.serialize(
        object.serverDedicatedRaid,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverExtra != null) {
      yield r'server_extra';
      yield serializers.serialize(
        object.serverExtra,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerServiceInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerServiceInfoBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'server_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverId = valueDes;
          break;
        case r'server_hostname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverHostname = valueDes;
          break;
        case r'server_custid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverCustid = valueDes;
          break;
        case r'server_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverType = valueDes;
          break;
        case r'server_currency':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverCurrency = valueDes;
          break;
        case r'server_order_date':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverOrderDate = valueDes;
          break;
        case r'server_invoice':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverInvoice = valueDes;
          break;
        case r'server_coupon':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverCoupon = valueDes;
          break;
        case r'server_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverStatus = valueDes;
          break;
        case r'server_root':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverRoot = valueDes;
          break;
        case r'server_dedicated_tag':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverDedicatedTag = valueDes;
          break;
        case r'server_custom_tag':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverCustomTag = valueDes;
          break;
        case r'server_comment':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverComment = valueDes;
          break;
        case r'server_initial_bill':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverInitialBill = valueDes;
          break;
        case r'server_hardware':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverHardware = valueDes;
          break;
        case r'server_ips':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverIps = valueDes;
          break;
        case r'server_monthly_bill':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverMonthlyBill = valueDes;
          break;
        case r'server_setup':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverSetup = valueDes;
          break;
        case r'server_discount':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverDiscount = valueDes;
          break;
        case r'server_rep':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverRep = valueDes;
          break;
        case r'server_date':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverDate = valueDes;
          break;
        case r'server_total_cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverTotalCost = valueDes;
          break;
        case r'server_location':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverLocation = valueDes;
          break;
        case r'server_hardware_ordered':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverHardwareOrdered = valueDes;
          break;
        case r'server_billed':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverBilled = valueDes;
          break;
        case r'server_welcome_email':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverWelcomeEmail = valueDes;
          break;
        case r'server_dedicated_cpu':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverDedicatedCpu = valueDes;
          break;
        case r'server_dedicated_memory':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverDedicatedMemory = valueDes;
          break;
        case r'server_dedicated_hd1':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverDedicatedHd1 = valueDes;
          break;
        case r'server_dedicated_hd2':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverDedicatedHd2 = valueDes;
          break;
        case r'server_dedicated_bandwidth':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverDedicatedBandwidth = valueDes;
          break;
        case r'server_dedicated_ips':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverDedicatedIps = valueDes;
          break;
        case r'server_dedicated_os':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverDedicatedOs = valueDes;
          break;
        case r'server_dedicated_cp':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverDedicatedCp = valueDes;
          break;
        case r'server_dedicated_raid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverDedicatedRaid = valueDes;
          break;
        case r'server_extra':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverExtra = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerServiceInfo deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerServiceInfoBuilder();
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

