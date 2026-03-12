using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Detailed domain service record for a domain order.
  /// </summary>
  [DataContract]
  public class DomainServiceInfo {
    /// <summary>
    /// Gets or Sets DomainId
    /// </summary>
    [DataMember(Name="domain_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_id")]
    public string DomainId { get; set; }

    /// <summary>
    /// Gets or Sets DomainHostname
    /// </summary>
    [DataMember(Name="domain_hostname", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_hostname")]
    public string DomainHostname { get; set; }

    /// <summary>
    /// Gets or Sets DomainUsername
    /// </summary>
    [DataMember(Name="domain_username", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_username")]
    public string DomainUsername { get; set; }

    /// <summary>
    /// Gets or Sets DomainPassword
    /// </summary>
    [DataMember(Name="domain_password", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_password")]
    public string DomainPassword { get; set; }

    /// <summary>
    /// Gets or Sets DomainType
    /// </summary>
    [DataMember(Name="domain_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_type")]
    public string DomainType { get; set; }

    /// <summary>
    /// Gets or Sets DomainCurrency
    /// </summary>
    [DataMember(Name="domain_currency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_currency")]
    public string DomainCurrency { get; set; }

    /// <summary>
    /// Gets or Sets DomainExpireDate
    /// </summary>
    [DataMember(Name="domain_expire_date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_expire_date")]
    public string DomainExpireDate { get; set; }

    /// <summary>
    /// Gets or Sets DomainOrderDate
    /// </summary>
    [DataMember(Name="domain_order_date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_order_date")]
    public string DomainOrderDate { get; set; }

    /// <summary>
    /// Gets or Sets DomainCustid
    /// </summary>
    [DataMember(Name="domain_custid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_custid")]
    public string DomainCustid { get; set; }

    /// <summary>
    /// Gets or Sets DomainStatus
    /// </summary>
    [DataMember(Name="domain_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_status")]
    public string DomainStatus { get; set; }

    /// <summary>
    /// Gets or Sets DomainInvoice
    /// </summary>
    [DataMember(Name="domain_invoice", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_invoice")]
    public string DomainInvoice { get; set; }

    /// <summary>
    /// Gets or Sets DomainCoupon
    /// </summary>
    [DataMember(Name="domain_coupon", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_coupon")]
    public string DomainCoupon { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class DomainServiceInfo {\n");
      sb.Append("  DomainId: ").Append(DomainId).Append("\n");
      sb.Append("  DomainHostname: ").Append(DomainHostname).Append("\n");
      sb.Append("  DomainUsername: ").Append(DomainUsername).Append("\n");
      sb.Append("  DomainPassword: ").Append(DomainPassword).Append("\n");
      sb.Append("  DomainType: ").Append(DomainType).Append("\n");
      sb.Append("  DomainCurrency: ").Append(DomainCurrency).Append("\n");
      sb.Append("  DomainExpireDate: ").Append(DomainExpireDate).Append("\n");
      sb.Append("  DomainOrderDate: ").Append(DomainOrderDate).Append("\n");
      sb.Append("  DomainCustid: ").Append(DomainCustid).Append("\n");
      sb.Append("  DomainStatus: ").Append(DomainStatus).Append("\n");
      sb.Append("  DomainInvoice: ").Append(DomainInvoice).Append("\n");
      sb.Append("  DomainCoupon: ").Append(DomainCoupon).Append("\n");
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
