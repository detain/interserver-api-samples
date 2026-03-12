package org.openapitools.model;

import java.math.BigDecimal;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Platform Packages
 */
@ApiModel(description="Platform Packages")

public class VpsOrderPlatformPackages  {
  
  @ApiModelProperty(example = "32", value = "")

  private BigDecimal kvm;

  @ApiModelProperty(example = "57", value = "")

  private BigDecimal kvmstorage;

  @ApiModelProperty(example = "54", value = "")

  private BigDecimal hyperv;
 /**
   * Get kvm
   * @return kvm
  **/
  @JsonProperty("kvm")
  public BigDecimal getKvm() {
    return kvm;
  }

  public void setKvm(BigDecimal kvm) {
    this.kvm = kvm;
  }

  public VpsOrderPlatformPackages kvm(BigDecimal kvm) {
    this.kvm = kvm;
    return this;
  }

 /**
   * Get kvmstorage
   * @return kvmstorage
  **/
  @JsonProperty("kvmstorage")
  public BigDecimal getKvmstorage() {
    return kvmstorage;
  }

  public void setKvmstorage(BigDecimal kvmstorage) {
    this.kvmstorage = kvmstorage;
  }

  public VpsOrderPlatformPackages kvmstorage(BigDecimal kvmstorage) {
    this.kvmstorage = kvmstorage;
    return this;
  }

 /**
   * Get hyperv
   * @return hyperv
  **/
  @JsonProperty("hyperv")
  public BigDecimal getHyperv() {
    return hyperv;
  }

  public void setHyperv(BigDecimal hyperv) {
    this.hyperv = hyperv;
  }

  public VpsOrderPlatformPackages hyperv(BigDecimal hyperv) {
    this.hyperv = hyperv;
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
    VpsOrderPlatformPackages vpsOrderPlatformPackages = (VpsOrderPlatformPackages) o;
    return Objects.equals(this.kvm, vpsOrderPlatformPackages.kvm) &&
        Objects.equals(this.kvmstorage, vpsOrderPlatformPackages.kvmstorage) &&
        Objects.equals(this.hyperv, vpsOrderPlatformPackages.hyperv);
  }

  @Override
  public int hashCode() {
    return Objects.hash(kvm, kvmstorage, hyperv);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsOrderPlatformPackages {\n");
    
    sb.append("    kvm: ").append(toIndentedString(kvm)).append("\n");
    sb.append("    kvmstorage: ").append(toIndentedString(kvmstorage)).append("\n");
    sb.append("    hyperv: ").append(toIndentedString(hyperv)).append("\n");
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

