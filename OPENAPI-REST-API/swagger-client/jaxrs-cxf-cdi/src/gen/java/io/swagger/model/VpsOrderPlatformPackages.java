package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * Platform Packages
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Platform Packages")

public class VpsOrderPlatformPackages   {
  private BigDecimal kvm = null;
  private BigDecimal kvmstorage = null;
  private BigDecimal hyperv = null;

  /**
   **/
  public VpsOrderPlatformPackages kvm(BigDecimal kvm) {
    this.kvm = kvm;
    return this;
  }

  
  
  @Schema(example = "32", description = "")
  @JsonProperty("kvm")
  @NotNull
  @Valid
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

  
  
  @Schema(example = "57", description = "")
  @JsonProperty("kvmstorage")
  @NotNull
  @Valid
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

  
  
  @Schema(example = "54", description = "")
  @JsonProperty("hyperv")
  @NotNull
  @Valid
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
