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
  public class DomainAllInfoAttributes {
    /// <summary>
    /// Gets or Sets ContactSet
    /// </summary>
    [DataMember(Name="contact_set", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "contact_set")]
    public DomainAllInfoAttributesContactSet ContactSet { get; set; }

    /// <summary>
    /// Gets or Sets RegistryCreatedate
    /// </summary>
    [DataMember(Name="registry_createdate", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "registry_createdate")]
    public string RegistryCreatedate { get; set; }

    /// <summary>
    /// Gets or Sets RegistryExpiredate
    /// </summary>
    [DataMember(Name="registry_expiredate", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "registry_expiredate")]
    public string RegistryExpiredate { get; set; }

    /// <summary>
    /// Gets or Sets TldData
    /// </summary>
    [DataMember(Name="tld_data", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "tld_data")]
    public string TldData { get; set; }

    /// <summary>
    /// Gets or Sets LetExpire
    /// </summary>
    [DataMember(Name="let_expire", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "let_expire")]
    public string LetExpire { get; set; }

    /// <summary>
    /// Gets or Sets AutoRenew
    /// </summary>
    [DataMember(Name="auto_renew", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "auto_renew")]
    public string AutoRenew { get; set; }

    /// <summary>
    /// Gets or Sets SponsoringRsp
    /// </summary>
    [DataMember(Name="sponsoring_rsp", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "sponsoring_rsp")]
    public string SponsoringRsp { get; set; }

    /// <summary>
    /// Gets or Sets GdprConsentStatus
    /// </summary>
    [DataMember(Name="gdpr_consent_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "gdpr_consent_status")]
    public string GdprConsentStatus { get; set; }

    /// <summary>
    /// Gets or Sets NameserverList
    /// </summary>
    [DataMember(Name="nameserver_list", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "nameserver_list")]
    public List<DomainNameServer> NameserverList { get; set; }

    /// <summary>
    /// Gets or Sets RegistryUpdatedate
    /// </summary>
    [DataMember(Name="registry_updatedate", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "registry_updatedate")]
    public string RegistryUpdatedate { get; set; }

    /// <summary>
    /// Gets or Sets AffiliateId
    /// </summary>
    [DataMember(Name="affiliate_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "affiliate_id")]
    public string AffiliateId { get; set; }

    /// <summary>
    /// Gets or Sets Expiredate
    /// </summary>
    [DataMember(Name="expiredate", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "expiredate")]
    public string Expiredate { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class DomainAllInfoAttributes {\n");
      sb.Append("  ContactSet: ").Append(ContactSet).Append("\n");
      sb.Append("  RegistryCreatedate: ").Append(RegistryCreatedate).Append("\n");
      sb.Append("  RegistryExpiredate: ").Append(RegistryExpiredate).Append("\n");
      sb.Append("  TldData: ").Append(TldData).Append("\n");
      sb.Append("  LetExpire: ").Append(LetExpire).Append("\n");
      sb.Append("  AutoRenew: ").Append(AutoRenew).Append("\n");
      sb.Append("  SponsoringRsp: ").Append(SponsoringRsp).Append("\n");
      sb.Append("  GdprConsentStatus: ").Append(GdprConsentStatus).Append("\n");
      sb.Append("  NameserverList: ").Append(NameserverList).Append("\n");
      sb.Append("  RegistryUpdatedate: ").Append(RegistryUpdatedate).Append("\n");
      sb.Append("  AffiliateId: ").Append(AffiliateId).Append("\n");
      sb.Append("  Expiredate: ").Append(Expiredate).Append("\n");
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
