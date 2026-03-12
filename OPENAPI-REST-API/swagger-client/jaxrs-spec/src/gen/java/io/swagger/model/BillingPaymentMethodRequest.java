package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Payload for updating the default account payment method.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Payload for updating the default account payment method.")

public class BillingPaymentMethodRequest   {

  private @Valid String paymentMethod = null;

  private @Valid String ccAuto = null;

  /**
   * Payment method identifier (cc, paypal, or cc{index}).
   **/
  public BillingPaymentMethodRequest paymentMethod(String paymentMethod) {
    this.paymentMethod = paymentMethod;
    return this;
  }

  
  @ApiModelProperty(value = "Payment method identifier (cc, paypal, or cc{index}).")
  @JsonProperty("payment_method")
  @NotNull

  public String getPaymentMethod() {
    return paymentMethod;
  }
  public void setPaymentMethod(String paymentMethod) {
    this.paymentMethod = paymentMethod;
  }

  /**
   * Whether automatic credit card payments are enabled.
   **/
  public BillingPaymentMethodRequest ccAuto(String ccAuto) {
    this.ccAuto = ccAuto;
    return this;
  }

  
  @ApiModelProperty(value = "Whether automatic credit card payments are enabled.")
  @JsonProperty("cc_auto")
  @NotNull

  public String getCcAuto() {
    return ccAuto;
  }
  public void setCcAuto(String ccAuto) {
    this.ccAuto = ccAuto;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BillingPaymentMethodRequest billingPaymentMethodRequest = (BillingPaymentMethodRequest) o;
    return Objects.equals(paymentMethod, billingPaymentMethodRequest.paymentMethod) &&
        Objects.equals(ccAuto, billingPaymentMethodRequest.ccAuto);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
