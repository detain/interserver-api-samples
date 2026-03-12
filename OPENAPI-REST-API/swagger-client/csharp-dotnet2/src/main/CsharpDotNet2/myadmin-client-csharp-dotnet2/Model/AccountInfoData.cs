using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Detailed account profile data including contact info, billing, API keys, and security settings.
  /// </summary>
  [DataContract]
  public class AccountInfoData {
    /// <summary>
    /// Gets or Sets Group
    /// </summary>
    [DataMember(Name="group", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "group")]
    public string Group { get; set; }

    /// <summary>
    /// Gets or Sets Address
    /// </summary>
    [DataMember(Name="address", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "address")]
    public string Address { get; set; }

    /// <summary>
    /// Gets or Sets City
    /// </summary>
    [DataMember(Name="city", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "city")]
    public string City { get; set; }

    /// <summary>
    /// Gets or Sets Country
    /// </summary>
    [DataMember(Name="country", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "country")]
    public string Country { get; set; }

    /// <summary>
    /// Gets or Sets DisableCc
    /// </summary>
    [DataMember(Name="disable_cc", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "disable_cc")]
    public string DisableCc { get; set; }

    /// <summary>
    /// Gets or Sets FraudrecordScore
    /// </summary>
    [DataMember(Name="fraudrecord_score", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "fraudrecord_score")]
    public string FraudrecordScore { get; set; }

    /// <summary>
    /// Gets or Sets Ima
    /// </summary>
    [DataMember(Name="ima", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ima")]
    public string Ima { get; set; }

    /// <summary>
    /// Gets or Sets Name
    /// </summary>
    [DataMember(Name="name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "name")]
    public string Name { get; set; }

    /// <summary>
    /// Gets or Sets PaymentMethod
    /// </summary>
    [DataMember(Name="payment_method", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "payment_method")]
    public string PaymentMethod { get; set; }

    /// <summary>
    /// Gets or Sets Phone
    /// </summary>
    [DataMember(Name="phone", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "phone")]
    public string Phone { get; set; }

    /// <summary>
    /// Gets or Sets Pin
    /// </summary>
    [DataMember(Name="pin", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "pin")]
    public string Pin { get; set; }

    /// <summary>
    /// Gets or Sets State
    /// </summary>
    [DataMember(Name="state", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "state")]
    public string State { get; set; }

    /// <summary>
    /// Gets or Sets Status
    /// </summary>
    [DataMember(Name="status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "status")]
    public string Status { get; set; }

    /// <summary>
    /// Gets or Sets Zip
    /// </summary>
    [DataMember(Name="zip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "zip")]
    public string Zip { get; set; }

    /// <summary>
    /// Gets or Sets AccountId
    /// </summary>
    [DataMember(Name="account_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "account_id")]
    public string AccountId { get; set; }

    /// <summary>
    /// Gets or Sets AccountLid
    /// </summary>
    [DataMember(Name="account_lid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "account_lid")]
    public string AccountLid { get; set; }

    /// <summary>
    /// Gets or Sets Address2
    /// </summary>
    [DataMember(Name="address2", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "address2")]
    public string Address2 { get; set; }

    /// <summary>
    /// Gets or Sets AffiliateDockDescription
    /// </summary>
    [DataMember(Name="affiliate_dock_description", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "affiliate_dock_description")]
    public string AffiliateDockDescription { get; set; }

    /// <summary>
    /// Gets or Sets AffiliateDockTitle
    /// </summary>
    [DataMember(Name="affiliate_dock_title", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "affiliate_dock_title")]
    public string AffiliateDockTitle { get; set; }

    /// <summary>
    /// Gets or Sets AffiliatePaymentMethod
    /// </summary>
    [DataMember(Name="affiliate_payment_method", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "affiliate_payment_method")]
    public string AffiliatePaymentMethod { get; set; }

    /// <summary>
    /// Gets or Sets AffiliatePaypal
    /// </summary>
    [DataMember(Name="affiliate_paypal", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "affiliate_paypal")]
    public string AffiliatePaypal { get; set; }

    /// <summary>
    /// Gets or Sets Cc
    /// </summary>
    [DataMember(Name="cc", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cc")]
    public string Cc { get; set; }

    /// <summary>
    /// Gets or Sets CcAuto
    /// </summary>
    [DataMember(Name="cc_auto", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cc_auto")]
    public string CcAuto { get; set; }

    /// <summary>
    /// Gets or Sets CcExp
    /// </summary>
    [DataMember(Name="cc_exp", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cc_exp")]
    public string CcExp { get; set; }

    /// <summary>
    /// Gets or Sets CcType
    /// </summary>
    [DataMember(Name="cc_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cc_type")]
    public string CcType { get; set; }

    /// <summary>
    /// Gets or Sets CcWhitelist
    /// </summary>
    [DataMember(Name="cc_whitelist", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cc_whitelist")]
    public string CcWhitelist { get; set; }

    /// <summary>
    /// Gets or Sets Ccs
    /// </summary>
    [DataMember(Name="ccs", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ccs")]
    public AccountInfoDataCcs Ccs { get; set; }

    /// <summary>
    /// Gets or Sets CcsAdded
    /// </summary>
    [DataMember(Name="ccs_added", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ccs_added")]
    public string CcsAdded { get; set; }

    /// <summary>
    /// Gets or Sets Company
    /// </summary>
    [DataMember(Name="company", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "company")]
    public string Company { get; set; }

    /// <summary>
    /// Gets or Sets Currency
    /// </summary>
    [DataMember(Name="currency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "currency")]
    public string Currency { get; set; }

    /// <summary>
    /// Gets or Sets DisableReinstall
    /// </summary>
    [DataMember(Name="disable_reinstall", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "disable_reinstall")]
    public string DisableReinstall { get; set; }

    /// <summary>
    /// Gets or Sets DisableReset
    /// </summary>
    [DataMember(Name="disable_reset", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "disable_reset")]
    public string DisableReset { get; set; }

    /// <summary>
    /// Gets or Sets Email
    /// </summary>
    [DataMember(Name="email", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "email")]
    public string Email { get; set; }

    /// <summary>
    /// Gets or Sets EmailAbuse
    /// </summary>
    [DataMember(Name="email_abuse", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "email_abuse")]
    public string EmailAbuse { get; set; }

    /// <summary>
    /// Gets or Sets EmailSettings
    /// </summary>
    [DataMember(Name="email_settings", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "email_settings")]
    public AccountInfoDataEmailSettings EmailSettings { get; set; }

    /// <summary>
    /// Gets or Sets Extra
    /// </summary>
    [DataMember(Name="extra", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "extra")]
    public AccountInfoDataExtra Extra { get; set; }

    /// <summary>
    /// Gets or Sets FacebookId
    /// </summary>
    [DataMember(Name="facebook_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "facebook_id")]
    public string FacebookId { get; set; }

    /// <summary>
    /// Gets or Sets FacebookUrl
    /// </summary>
    [DataMember(Name="facebook_url", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "facebook_url")]
    public string FacebookUrl { get; set; }

    /// <summary>
    /// Gets or Sets Firstname
    /// </summary>
    [DataMember(Name="firstname", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "firstname")]
    public string Firstname { get; set; }

    /// <summary>
    /// Gets or Sets Fraudrecord
    /// </summary>
    [DataMember(Name="fraudrecord", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "fraudrecord")]
    public AccountInfoDataFraudrecord Fraudrecord { get; set; }

    /// <summary>
    /// Gets or Sets GithubId
    /// </summary>
    [DataMember(Name="github_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "github_id")]
    public string GithubId { get; set; }

    /// <summary>
    /// Gets or Sets GithubUrl
    /// </summary>
    [DataMember(Name="github_url", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "github_url")]
    public string GithubUrl { get; set; }

    /// <summary>
    /// Gets or Sets GoogleId
    /// </summary>
    [DataMember(Name="google_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "google_id")]
    public string GoogleId { get; set; }

    /// <summary>
    /// Gets or Sets GoogleUrl
    /// </summary>
    [DataMember(Name="google_url", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "google_url")]
    public string GoogleUrl { get; set; }

    /// <summary>
    /// Gets or Sets InnertellId
    /// </summary>
    [DataMember(Name="innertell_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "innertell_id")]
    public string InnertellId { get; set; }

    /// <summary>
    /// Gets or Sets Lastname
    /// </summary>
    [DataMember(Name="lastname", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "lastname")]
    public string Lastname { get; set; }

    /// <summary>
    /// Gets or Sets Locale
    /// </summary>
    [DataMember(Name="locale", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "locale")]
    public string Locale { get; set; }

    /// <summary>
    /// Gets or Sets Maxmind
    /// </summary>
    [DataMember(Name="maxmind", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "maxmind")]
    public AccountInfoMaxMindResponse Maxmind { get; set; }

    /// <summary>
    /// Gets or Sets MaxmindScore
    /// </summary>
    [DataMember(Name="maxmind_score", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "maxmind_score")]
    public string MaxmindScore { get; set; }

    /// <summary>
    /// Gets or Sets MbId
    /// </summary>
    [DataMember(Name="mb_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "mb_id")]
    public string MbId { get; set; }

    /// <summary>
    /// Gets or Sets ModernbillId
    /// </summary>
    [DataMember(Name="modernbill_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "modernbill_id")]
    public string ModernbillId { get; set; }

    /// <summary>
    /// Gets or Sets Picture
    /// </summary>
    [DataMember(Name="picture", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "picture")]
    public string Picture { get; set; }

    /// <summary>
    /// Gets or Sets ReferrerCoupon
    /// </summary>
    [DataMember(Name="referrer_coupon", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "referrer_coupon")]
    public string ReferrerCoupon { get; set; }

    /// <summary>
    /// Gets or Sets ResellerMarkup
    /// </summary>
    [DataMember(Name="reseller_markup", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "reseller_markup")]
    public string ResellerMarkup { get; set; }

    /// <summary>
    /// Gets or Sets Username
    /// </summary>
    [DataMember(Name="username", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "username")]
    public string Username { get; set; }

    /// <summary>
    /// Gets or Sets SshKey
    /// </summary>
    [DataMember(Name="ssh_key", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ssh_key")]
    public string SshKey { get; set; }

    /// <summary>
    /// Gets or Sets SshKeyWrapped
    /// </summary>
    [DataMember(Name="ssh_key_wrapped", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ssh_key_wrapped")]
    public string SshKeyWrapped { get; set; }

    /// <summary>
    /// Gets or Sets ApiKey
    /// </summary>
    [DataMember(Name="api_key", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "api_key")]
    public string ApiKey { get; set; }

    /// <summary>
    /// Gets or Sets ApiKeyWrapped
    /// </summary>
    [DataMember(Name="api_key_wrapped", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "api_key_wrapped")]
    public string ApiKeyWrapped { get; set; }

    /// <summary>
    /// Gets or Sets _2faGoogleKey
    /// </summary>
    [DataMember(Name="2fa_google_key", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "2fa_google_key")]
    public string _2faGoogleKey { get; set; }

    /// <summary>
    /// Gets or Sets _2faGoogleEnabled
    /// </summary>
    [DataMember(Name="2fa_google_enabled", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "2fa_google_enabled")]
    public bool? _2faGoogleEnabled { get; set; }

    /// <summary>
    /// Gets or Sets _2faGoogle
    /// </summary>
    [DataMember(Name="2fa_google", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "2fa_google")]
    public int? _2faGoogle { get; set; }

    /// <summary>
    /// Gets or Sets _2faGoogleSplit
    /// </summary>
    [DataMember(Name="2fa_google_split", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "2fa_google_split")]
    public string _2faGoogleSplit { get; set; }

    /// <summary>
    /// Gets or Sets _2faGoogleQr
    /// </summary>
    [DataMember(Name="2fa_google_qr", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "2fa_google_qr")]
    public string _2faGoogleQr { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class AccountInfoData {\n");
      sb.Append("  Group: ").Append(Group).Append("\n");
      sb.Append("  Address: ").Append(Address).Append("\n");
      sb.Append("  City: ").Append(City).Append("\n");
      sb.Append("  Country: ").Append(Country).Append("\n");
      sb.Append("  DisableCc: ").Append(DisableCc).Append("\n");
      sb.Append("  FraudrecordScore: ").Append(FraudrecordScore).Append("\n");
      sb.Append("  Ima: ").Append(Ima).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  PaymentMethod: ").Append(PaymentMethod).Append("\n");
      sb.Append("  Phone: ").Append(Phone).Append("\n");
      sb.Append("  Pin: ").Append(Pin).Append("\n");
      sb.Append("  State: ").Append(State).Append("\n");
      sb.Append("  Status: ").Append(Status).Append("\n");
      sb.Append("  Zip: ").Append(Zip).Append("\n");
      sb.Append("  AccountId: ").Append(AccountId).Append("\n");
      sb.Append("  AccountLid: ").Append(AccountLid).Append("\n");
      sb.Append("  Address2: ").Append(Address2).Append("\n");
      sb.Append("  AffiliateDockDescription: ").Append(AffiliateDockDescription).Append("\n");
      sb.Append("  AffiliateDockTitle: ").Append(AffiliateDockTitle).Append("\n");
      sb.Append("  AffiliatePaymentMethod: ").Append(AffiliatePaymentMethod).Append("\n");
      sb.Append("  AffiliatePaypal: ").Append(AffiliatePaypal).Append("\n");
      sb.Append("  Cc: ").Append(Cc).Append("\n");
      sb.Append("  CcAuto: ").Append(CcAuto).Append("\n");
      sb.Append("  CcExp: ").Append(CcExp).Append("\n");
      sb.Append("  CcType: ").Append(CcType).Append("\n");
      sb.Append("  CcWhitelist: ").Append(CcWhitelist).Append("\n");
      sb.Append("  Ccs: ").Append(Ccs).Append("\n");
      sb.Append("  CcsAdded: ").Append(CcsAdded).Append("\n");
      sb.Append("  Company: ").Append(Company).Append("\n");
      sb.Append("  Currency: ").Append(Currency).Append("\n");
      sb.Append("  DisableReinstall: ").Append(DisableReinstall).Append("\n");
      sb.Append("  DisableReset: ").Append(DisableReset).Append("\n");
      sb.Append("  Email: ").Append(Email).Append("\n");
      sb.Append("  EmailAbuse: ").Append(EmailAbuse).Append("\n");
      sb.Append("  EmailSettings: ").Append(EmailSettings).Append("\n");
      sb.Append("  Extra: ").Append(Extra).Append("\n");
      sb.Append("  FacebookId: ").Append(FacebookId).Append("\n");
      sb.Append("  FacebookUrl: ").Append(FacebookUrl).Append("\n");
      sb.Append("  Firstname: ").Append(Firstname).Append("\n");
      sb.Append("  Fraudrecord: ").Append(Fraudrecord).Append("\n");
      sb.Append("  GithubId: ").Append(GithubId).Append("\n");
      sb.Append("  GithubUrl: ").Append(GithubUrl).Append("\n");
      sb.Append("  GoogleId: ").Append(GoogleId).Append("\n");
      sb.Append("  GoogleUrl: ").Append(GoogleUrl).Append("\n");
      sb.Append("  InnertellId: ").Append(InnertellId).Append("\n");
      sb.Append("  Lastname: ").Append(Lastname).Append("\n");
      sb.Append("  Locale: ").Append(Locale).Append("\n");
      sb.Append("  Maxmind: ").Append(Maxmind).Append("\n");
      sb.Append("  MaxmindScore: ").Append(MaxmindScore).Append("\n");
      sb.Append("  MbId: ").Append(MbId).Append("\n");
      sb.Append("  ModernbillId: ").Append(ModernbillId).Append("\n");
      sb.Append("  Picture: ").Append(Picture).Append("\n");
      sb.Append("  ReferrerCoupon: ").Append(ReferrerCoupon).Append("\n");
      sb.Append("  ResellerMarkup: ").Append(ResellerMarkup).Append("\n");
      sb.Append("  Username: ").Append(Username).Append("\n");
      sb.Append("  SshKey: ").Append(SshKey).Append("\n");
      sb.Append("  SshKeyWrapped: ").Append(SshKeyWrapped).Append("\n");
      sb.Append("  ApiKey: ").Append(ApiKey).Append("\n");
      sb.Append("  ApiKeyWrapped: ").Append(ApiKeyWrapped).Append("\n");
      sb.Append("  _2faGoogleKey: ").Append(_2faGoogleKey).Append("\n");
      sb.Append("  _2faGoogleEnabled: ").Append(_2faGoogleEnabled).Append("\n");
      sb.Append("  _2faGoogle: ").Append(_2faGoogle).Append("\n");
      sb.Append("  _2faGoogleSplit: ").Append(_2faGoogleSplit).Append("\n");
      sb.Append("  _2faGoogleQr: ").Append(_2faGoogleQr).Append("\n");
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
