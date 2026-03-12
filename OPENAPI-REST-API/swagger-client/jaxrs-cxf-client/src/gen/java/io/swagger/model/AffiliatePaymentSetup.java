package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

/**
  * Affiliate Payment Setup.  Here you can set if you want the payments to go to `prepay` or `paypal` and the PayPal email address.
 **/
@Schema(description="Affiliate Payment Setup.  Here you can set if you want the payments to go to `prepay` or `paypal` and the PayPal email address.")
public class AffiliatePaymentSetup   {
  
  @Schema(description = "")
  private String affiliatePaypal = null;
  
  @Schema(description = "")
  private String affiliatePaymentMethod = null;
 /**
   * Get affiliatePaypal
   * @return affiliatePaypal
  **/
  @JsonProperty("affiliate_paypal")
  public String getAffiliatePaypal() {
    return affiliatePaypal;
  }

  public void setAffiliatePaypal(String affiliatePaypal) {
    this.affiliatePaypal = affiliatePaypal;
  }

  public AffiliatePaymentSetup affiliatePaypal(String affiliatePaypal) {
    this.affiliatePaypal = affiliatePaypal;
    return this;
  }

 /**
   * Get affiliatePaymentMethod
   * @return affiliatePaymentMethod
  **/
  @JsonProperty("affiliate_payment_method")
  public String getAffiliatePaymentMethod() {
    return affiliatePaymentMethod;
  }

  public void setAffiliatePaymentMethod(String affiliatePaymentMethod) {
    this.affiliatePaymentMethod = affiliatePaymentMethod;
  }

  public AffiliatePaymentSetup affiliatePaymentMethod(String affiliatePaymentMethod) {
    this.affiliatePaymentMethod = affiliatePaymentMethod;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class AffiliatePaymentSetup {\n");
    
    sb.append("    affiliatePaypal: ").append(toIndentedString(affiliatePaypal)).append("\n");
    sb.append("    affiliatePaymentMethod: ").append(toIndentedString(affiliatePaymentMethod)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
