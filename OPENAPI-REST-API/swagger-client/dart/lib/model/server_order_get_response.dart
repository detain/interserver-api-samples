part of swagger.api;

class ServerOrderGetResponse {
  
  FormValues formValues = null;

  ConfigIds configIds = null;

  int cpu = null;

  Map<String, Cpu> cpuLi = {};

  ConfigLists configLi = null;

  Map<String, FieldLabel> fieldLabel = {};

  Map<String, Map<String, CpuWithDefaults>> cpuCores = {};

  int frequency = null;

  String currency = null;

  String currencySymbol = null;

  String country = null;

  int custid = null;

  String ima = null;

  String step = null;

  List<Region> regions = [];

  List<AssetServer> assetServers = [];

  List<Object> buyItServers = [];

  String displayShowmore = null;

  double custDiscount = null;

  ServerOrderGetResponse();

  @override
  String toString() {
    return 'ServerOrderGetResponse[formValues=$formValues, configIds=$configIds, cpu=$cpu, cpuLi=$cpuLi, configLi=$configLi, fieldLabel=$fieldLabel, cpuCores=$cpuCores, frequency=$frequency, currency=$currency, currencySymbol=$currencySymbol, country=$country, custid=$custid, ima=$ima, step=$step, regions=$regions, assetServers=$assetServers, buyItServers=$buyItServers, displayShowmore=$displayShowmore, custDiscount=$custDiscount, ]';
  }

  ServerOrderGetResponse.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    formValues = new FormValues.fromJson(json['form_values']);
    configIds = new ConfigIds.fromJson(json['config_ids']);
    cpu = json['cpu'];
    cpuLi = Cpu.mapFromJson(json['cpu_li']);
    configLi = new ConfigLists.fromJson(json['config_li']);
    fieldLabel = FieldLabel.mapFromJson(json['field_label']);
    cpuCores = Map.mapFromJson(json['cpu_cores']);
    frequency = json['frequency'];
    currency = json['currency'];
    currencySymbol = json['currencySymbol'];
    country = json['country'];
    custid = json['custid'];
    ima = json['ima'];
    step = json['step'];
    regions = Region.listFromJson(json['regions']);
    assetServers = AssetServer.listFromJson(json['asset_servers']);
    buyItServers = Object.listFromJson(json['buy_it_servers']);
    displayShowmore = json['display_showmore'];
    custDiscount = json['cust_discount'];
  }

  Map<String, dynamic> toJson() {
    return {
      'form_values': formValues,
      'config_ids': configIds,
      'cpu': cpu,
      'cpu_li': cpuLi,
      'config_li': configLi,
      'field_label': fieldLabel,
      'cpu_cores': cpuCores,
      'frequency': frequency,
      'currency': currency,
      'currencySymbol': currencySymbol,
      'country': country,
      'custid': custid,
      'ima': ima,
      'step': step,
      'regions': regions,
      'asset_servers': assetServers,
      'buy_it_servers': buyItServers,
      'display_showmore': displayShowmore,
      'cust_discount': custDiscount
     };
  }

  static List<ServerOrderGetResponse> listFromJson(List<dynamic> json) {
    return json == null ? new List<ServerOrderGetResponse>() : json.map((value) => new ServerOrderGetResponse.fromJson(value)).toList();
  }

  static Map<String, ServerOrderGetResponse> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, ServerOrderGetResponse>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new ServerOrderGetResponse.fromJson(value));
    }
    return map;
  }
}
