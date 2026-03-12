package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * Payload for updating the default account payment method.
 */
@Schema(description = "Payload for updating the default account payment method.")
@Validated
@Introspected

public class BillingPaymentMethodRequest   {
  @JsonProperty("payment_method")
  private String paymentMethod = null;

  @JsonProperty("cc_auto")
  private String ccAuto = null;

  public BillingPaymentMethodRequest paymentMethod(String paymentMethod) {
    this.paymentMethod = paymentMethod;
    return this;
  }

  /**
   * Payment method identifier (cc, paypal, or cc{index}).
   * @return paymentMethod
  **/
  @Schema(description = "Payment method identifier (cc, paypal, or cc{index}).")
  @NotNull

  public String getPaymentMethod() {
    return paymentMethod;
  }

  public void setPaymentMethod(String paymentMethod) {
    this.paymentMethod = paymentMethod;
  }

  public BillingPaymentMethodRequest ccAuto(String ccAuto) {
    this.ccAuto = ccAuto;
    return this;
  }

  /**
   * Whether automatic credit card payments are enabled.
   * @return ccAuto
  **/
  @Schema(description = "Whether automatic credit card payments are enabled.")
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
