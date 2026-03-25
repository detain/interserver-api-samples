package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Payload for updating the default account payment method.
 */
@ApiModel(description="Payload for updating the default account payment method.")

public class BillingPaymentMethodRequest  {
  
 /**
  * Payment method identifier (cc, paypal, or cc{index}).
  */
  @ApiModelProperty(value = "Payment method identifier (cc, paypal, or cc{index}).")

  private String paymentMethod;

 /**
  * Whether automatic credit card payments are enabled.
  */
  @ApiModelProperty(value = "Whether automatic credit card payments are enabled.")

  private String ccAuto;
 /**
   * Payment method identifier (cc, paypal, or cc{index}).
   * @return paymentMethod
  **/
  @JsonProperty("payment_method")
  public String getPaymentMethod() {
    return paymentMethod;
  }

  public void setPaymentMethod(String paymentMethod) {
    this.paymentMethod = paymentMethod;
  }

  public BillingPaymentMethodRequest paymentMethod(String paymentMethod) {
    this.paymentMethod = paymentMethod;
    return this;
  }

 /**
   * Whether automatic credit card payments are enabled.
   * @return ccAuto
  **/
  @JsonProperty("cc_auto")
  public String getCcAuto() {
    return ccAuto;
  }

  public void setCcAuto(String ccAuto) {
    this.ccAuto = ccAuto;
  }

  public BillingPaymentMethodRequest ccAuto(String ccAuto) {
    this.ccAuto = ccAuto;
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
    BillingPaymentMethodRequest billingPaymentMethodRequest = (BillingPaymentMethodRequest) o;
    return Objects.equals(this.paymentMethod, billingPaymentMethodRequest.paymentMethod) &&
        Objects.equals(this.ccAuto, billingPaymentMethodRequest.ccAuto);
  }

  @Override
  public int hashCode() {
    return Objects.hash(paymentMethod, ccAuto);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BillingPaymentMethodRequest {\n");
    
    sb.append("    paymentMethod: ").append(toIndentedString(paymentMethod)).append("\n");
    sb.append("    ccAuto: ").append(toIndentedString(ccAuto)).append("\n");
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

