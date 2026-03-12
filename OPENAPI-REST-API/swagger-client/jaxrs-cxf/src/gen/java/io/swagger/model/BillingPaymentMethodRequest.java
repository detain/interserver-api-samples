package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;

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
  * Payload for updating the default account payment method.
 **/
@Schema(description="Payload for updating the default account payment method.")
public class BillingPaymentMethodRequest   {
  
  @Schema(description = "Payment method identifier (cc, paypal, or cc{index}).")
 /**
   * Payment method identifier (cc, paypal, or cc{index}).  
  **/
  private String paymentMethod = null;
  
  @Schema(description = "Whether automatic credit card payments are enabled.")
 /**
   * Whether automatic credit card payments are enabled.  
  **/
  private String ccAuto = null;
 /**
   * Payment method identifier (cc, paypal, or cc{index}).
   * @return paymentMethod
  **/
  @JsonProperty("payment_method")
  @NotNull
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
  @NotNull
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
