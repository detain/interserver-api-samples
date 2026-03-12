package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;

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
  * Request payload for creating a new prepay balance.
 **/
@Schema(description="Request payload for creating a new prepay balance.")
public class BillingPrepayRequest   {
  
  @Schema(description = "Module the prepay should be applied to (for example `default`).")
 /**
   * Module the prepay should be applied to (for example `default`).  
  **/
  private String module = null;
  
  @Schema(description = "Amount to add to prepay balance. Minimum is $10.")
 /**
   * Amount to add to prepay balance. Minimum is $10.  
  **/
  private BigDecimal amount = null;
  
  @Schema(example = "1", description = "Whether the prepay balance should be used automatically.")
 /**
   * Whether the prepay balance should be used automatically.  
  **/
  private String automaticUse = null;
 /**
   * Module the prepay should be applied to (for example &#x60;default&#x60;).
   * @return module
  **/
  @JsonProperty("module")
  public String getModule() {
    return module;
  }

  public void setModule(String module) {
    this.module = module;
  }

  public BillingPrepayRequest module(String module) {
    this.module = module;
    return this;
  }

 /**
   * Amount to add to prepay balance. Minimum is $10.
   * @return amount
  **/
  @JsonProperty("amount")
  public BigDecimal getAmount() {
    return amount;
  }

  public void setAmount(BigDecimal amount) {
    this.amount = amount;
  }

  public BillingPrepayRequest amount(BigDecimal amount) {
    this.amount = amount;
    return this;
  }

 /**
   * Whether the prepay balance should be used automatically.
   * @return automaticUse
  **/
  @JsonProperty("automatic_use")
  public String getAutomaticUse() {
    return automaticUse;
  }

  public void setAutomaticUse(String automaticUse) {
    this.automaticUse = automaticUse;
  }

  public BillingPrepayRequest automaticUse(String automaticUse) {
    this.automaticUse = automaticUse;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BillingPrepayRequest {\n");
    
    sb.append("    module: ").append(toIndentedString(module)).append("\n");
    sb.append("    amount: ").append(toIndentedString(amount)).append("\n");
    sb.append("    automaticUse: ").append(toIndentedString(automaticUse)).append("\n");
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
