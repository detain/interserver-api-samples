using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// 
  /// </summary>
  [DataContract]
  public class LicenseServiceInfo {
    /// <summary>
    /// License ID
    /// </summary>
    /// <value>License ID</value>
    [DataMember(Name="license_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "license_id")]
    public string LicenseId { get; set; }

    /// <summary>
    /// License type
    /// </summary>
    /// <value>License type</value>
    [DataMember(Name="license_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "license_type")]
    public string LicenseType { get; set; }

    /// <summary>
    /// License currency
    /// </summary>
    /// <value>License currency</value>
    [DataMember(Name="license_currency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "license_currency")]
    public string LicenseCurrency { get; set; }

    /// <summary>
    /// License order date
    /// </summary>
    /// <value>License order date</value>
    [DataMember(Name="license_order_date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "license_order_date")]
    public DateTime? LicenseOrderDate { get; set; }

    /// <summary>
    /// Customer ID
    /// </summary>
    /// <value>Customer ID</value>
    [DataMember(Name="license_custid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "license_custid")]
    public string LicenseCustid { get; set; }

    /// <summary>
    /// License IP
    /// </summary>
    /// <value>License IP</value>
    [DataMember(Name="license_ip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "license_ip")]
    public string LicenseIp { get; set; }

    /// <summary>
    /// License status
    /// </summary>
    /// <value>License status</value>
    [DataMember(Name="license_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "license_status")]
    public string LicenseStatus { get; set; }

    /// <summary>
    /// License hostname
    /// </summary>
    /// <value>License hostname</value>
    [DataMember(Name="license_hostname", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "license_hostname")]
    public string LicenseHostname { get; set; }

    /// <summary>
    /// License key
    /// </summary>
    /// <value>License key</value>
    [DataMember(Name="license_key", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "license_key")]
    public string LicenseKey { get; set; }

    /// <summary>
    /// License invoice
    /// </summary>
    /// <value>License invoice</value>
    [DataMember(Name="license_invoice", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "license_invoice")]
    public string LicenseInvoice { get; set; }

    /// <summary>
    /// License coupon
    /// </summary>
    /// <value>License coupon</value>
    [DataMember(Name="license_coupon", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "license_coupon")]
    public string LicenseCoupon { get; set; }

    /// <summary>
    /// Additional license information
    /// </summary>
    /// <value>Additional license information</value>
    [DataMember(Name="license_extra", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "license_extra")]
    public string LicenseExtra { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class LicenseServiceInfo {\n");
      sb.Append("  LicenseId: ").Append(LicenseId).Append("\n");
      sb.Append("  LicenseType: ").Append(LicenseType).Append("\n");
      sb.Append("  LicenseCurrency: ").Append(LicenseCurrency).Append("\n");
      sb.Append("  LicenseOrderDate: ").Append(LicenseOrderDate).Append("\n");
      sb.Append("  LicenseCustid: ").Append(LicenseCustid).Append("\n");
      sb.Append("  LicenseIp: ").Append(LicenseIp).Append("\n");
      sb.Append("  LicenseStatus: ").Append(LicenseStatus).Append("\n");
      sb.Append("  LicenseHostname: ").Append(LicenseHostname).Append("\n");
      sb.Append("  LicenseKey: ").Append(LicenseKey).Append("\n");
      sb.Append("  LicenseInvoice: ").Append(LicenseInvoice).Append("\n");
      sb.Append("  LicenseCoupon: ").Append(LicenseCoupon).Append("\n");
      sb.Append("  LicenseExtra: ").Append(LicenseExtra).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }

    /// <summary>
    /// Get the JSON string presentation of the object
    /// </summary>
    /// <returns>JSON string presentation of the object</returns>
    public string ToJson() {
      return JsonConvert.SerializeObject(this, Formatting.Indented);
    }

}
}
