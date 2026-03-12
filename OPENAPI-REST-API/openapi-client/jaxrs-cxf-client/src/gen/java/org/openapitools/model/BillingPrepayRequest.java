package org.openapitools.model;

import java.math.BigDecimal;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Request payload for creating a new prepay balance.
 */
@ApiModel(description="Request payload for creating a new prepay balance.")

public class BillingPrepayRequest  {
  
 /**
  * Module the prepay should be applied to (for example `default`).
  */
  @ApiModelProperty(value = "Module the prepay should be applied to (for example `default`).")

  private String module;

 /**
  * Amount to add to prepay balance. Minimum is $10.
  */
  @ApiModelProperty(value = "Amount to add to prepay balance. Minimum is $10.")

  private BigDecimal amount;

 /**
  * Whether the prepay balance should be used automatically.
  */
  @ApiModelProperty(example = "1", value = "Whether the prepay balance should be used automatically.")

  private String automaticUse;
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BillingPrepayRequest billingPrepayRequest = (BillingPrepayRequest) o;
    return Objects.equals(this.module, billingPrepayRequest.module) &&
        Objects.equals(this.amount, billingPrepayRequest.amount) &&
        Objects.equals(this.automaticUse, billingPrepayRequest.automaticUse);
  }

  @Override
  public int hashCode() {
    return Objects.hash(module, amount, automaticUse);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

