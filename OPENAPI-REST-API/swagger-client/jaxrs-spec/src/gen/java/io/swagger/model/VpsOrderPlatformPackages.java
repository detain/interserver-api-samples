package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Platform Packages
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Platform Packages")

public class VpsOrderPlatformPackages   {

  private @Valid BigDecimal kvm = null;

  private @Valid BigDecimal kvmstorage = null;

  private @Valid BigDecimal hyperv = null;

  /**
   **/
  public VpsOrderPlatformPackages kvm(BigDecimal kvm) {
    this.kvm = kvm;
    return this;
  }

  
  @ApiModelProperty(example = "32", value = "")
  @JsonProperty("kvm")
  @NotNull

  public BigDecimal getKvm() {
    return kvm;
  }
  public void setKvm(BigDecimal kvm) {
    this.kvm = kvm;
  }

  /**
   **/
  public VpsOrderPlatformPackages kvmstorage(BigDecimal kvmstorage) {
    this.kvmstorage = kvmstorage;
    return this;
  }

  
  @ApiModelProperty(example = "57", value = "")
  @JsonProperty("kvmstorage")
  @NotNull

  public BigDecimal getKvmstorage() {
    return kvmstorage;
  }
  public void setKvmstorage(BigDecimal kvmstorage) {
    this.kvmstorage = kvmstorage;
  }

  /**
   **/
  public VpsOrderPlatformPackages hyperv(BigDecimal hyperv) {
    this.hyperv = hyperv;
    return this;
  }

  
  @ApiModelProperty(example = "54", value = "")
  @JsonProperty("hyperv")
  @NotNull

  public BigDecimal getHyperv() {
    return hyperv;
  }
  public void setHyperv(BigDecimal hyperv) {
    this.hyperv = hyperv;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsOrderPlatformPackages vpsOrderPlatformPackages = (VpsOrderPlatformPackages) o;
    return Objects.equals(kvm, vpsOrderPlatformPackages.kvm) &&
        Objects.equals(kvmstorage, vpsOrderPlatformPackages.kvmstorage) &&
        Objects.equals(hyperv, vpsOrderPlatformPackages.hyperv);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
