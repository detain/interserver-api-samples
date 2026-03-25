package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Affiliate Payment Setup.  Here you can set if you want the payments to go to `prepay` or `paypal` and the PayPal email address.
 */
@ApiModel(description="Affiliate Payment Setup.  Here you can set if you want the payments to go to `prepay` or `paypal` and the PayPal email address.")

public class AffiliatePaymentSetup  {
  
  @ApiModelProperty(value = "")

  private String affiliatePaypal;

  @ApiModelProperty(value = "")

  private String affiliatePaymentMethod;
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    AffiliatePaymentSetup affiliatePaymentSetup = (AffiliatePaymentSetup) o;
    return Objects.equals(this.affiliatePaypal, affiliatePaymentSetup.affiliatePaypal) &&
        Objects.equals(this.affiliatePaymentMethod, affiliatePaymentSetup.affiliatePaymentMethod);
  }

  @Override
  public int hashCode() {
    return Objects.hash(affiliatePaypal, affiliatePaymentMethod);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

