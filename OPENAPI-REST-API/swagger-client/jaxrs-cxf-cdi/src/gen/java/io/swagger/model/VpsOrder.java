package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.VpsOrderLocationNames;
import io.swagger.model.VpsOrderLocationStock;
import io.swagger.model.VpsOrderOsNames;
import io.swagger.model.VpsOrderPackageCosts;
import io.swagger.model.VpsOrderPlatformNames;
import io.swagger.model.VpsOrderPlatformPackages;
import io.swagger.model.VpsOrderServiceTypes;
import io.swagger.model.VpsOrderTemplates;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import javax.validation.Valid;
import javax.validation.constraints.*;
/**
 * Pricing and configuration options for ordering a new VPS, including slice costs by platform and available OS templates.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Pricing and configuration options for ordering a new VPS, including slice costs by platform and available OS templates.")

public class VpsOrder   {
  private BigDecimal vpsSliceSsdOvzCost = null;
  private BigDecimal vpsSliceOvzCost = null;
  private BigDecimal vpsSliceSsdVirtuozzoCost = null;
  private BigDecimal vpsSliceVirtuozzoCost = null;
  private BigDecimal vpsSliceHypervCost = null;
  private BigDecimal vpsSliceVmwareCost = null;
  private BigDecimal vpsSliceLxcCost = null;
  private BigDecimal vpsSliceXenCost = null;
  private BigDecimal vpsSliceKvmLCost = null;
  private BigDecimal vpsSliceKvmStorageCost = null;
  private BigDecimal vpsNyCost = null;
  private BigDecimal vpsSliceKvmWCost = null;
  private BigDecimal cpanelCost = null;
  private BigDecimal daCost = null;
  private String ramSlice = null;
  private String hdSlice = null;
  private String hdStorageSlice = null;
  private String bwSlice = null;
  private String bwType = null;
  private BigDecimal bwTotal = null;
  private String maxSlices = null;
  private VpsOrderPlatformPackages platformPackages = null;
  private VpsOrderPlatformNames platformNames = null;
  private VpsOrderPackageCosts packageCosts = null;
  private VpsOrderLocationStock locationStock = null;
  private VpsOrderLocationNames locationNames = null;
  private VpsOrderOsNames osNames = null;
  private VpsOrderTemplates templates = null;
  private VpsOrderServiceTypes serviceTypes = null;
  private String currency = null;
  private String currencySymbol = null;

  /**
   * Cost of VPS Slice SSD OVZ
   **/
  public VpsOrder vpsSliceSsdOvzCost(BigDecimal vpsSliceSsdOvzCost) {
    this.vpsSliceSsdOvzCost = vpsSliceSsdOvzCost;
    return this;
  }

  
  
  @Schema(example = "9", required = true, description = "Cost of VPS Slice SSD OVZ")
  @JsonProperty("vpsSliceSsdOvzCost")
  @NotNull
  @Valid
  public BigDecimal getVpsSliceSsdOvzCost() {
    return vpsSliceSsdOvzCost;
  }
  public void setVpsSliceSsdOvzCost(BigDecimal vpsSliceSsdOvzCost) {
    this.vpsSliceSsdOvzCost = vpsSliceSsdOvzCost;
  }

  /**
   * Cost of VPS Slice OVZ
   **/
  public VpsOrder vpsSliceOvzCost(BigDecimal vpsSliceOvzCost) {
    this.vpsSliceOvzCost = vpsSliceOvzCost;
    return this;
  }

  
  
  @Schema(example = "6", required = true, description = "Cost of VPS Slice OVZ")
  @JsonProperty("vpsSliceOvzCost")
  @NotNull
  @Valid
  public BigDecimal getVpsSliceOvzCost() {
    return vpsSliceOvzCost;
  }
  public void setVpsSliceOvzCost(BigDecimal vpsSliceOvzCost) {
    this.vpsSliceOvzCost = vpsSliceOvzCost;
  }

  /**
   * Cost of VPS Slice SSD Virtuozzo
   **/
  public VpsOrder vpsSliceSsdVirtuozzoCost(BigDecimal vpsSliceSsdVirtuozzoCost) {
    this.vpsSliceSsdVirtuozzoCost = vpsSliceSsdVirtuozzoCost;
    return this;
  }

  
  
  @Schema(example = "9", required = true, description = "Cost of VPS Slice SSD Virtuozzo")
  @JsonProperty("vpsSliceSsdVirtuozzoCost")
  @NotNull
  @Valid
  public BigDecimal getVpsSliceSsdVirtuozzoCost() {
    return vpsSliceSsdVirtuozzoCost;
  }
  public void setVpsSliceSsdVirtuozzoCost(BigDecimal vpsSliceSsdVirtuozzoCost) {
    this.vpsSliceSsdVirtuozzoCost = vpsSliceSsdVirtuozzoCost;
  }

  /**
   * Cost of VPS Slice Virtuozzo
   **/
  public VpsOrder vpsSliceVirtuozzoCost(BigDecimal vpsSliceVirtuozzoCost) {
    this.vpsSliceVirtuozzoCost = vpsSliceVirtuozzoCost;
    return this;
  }

  
  
  @Schema(example = "6", required = true, description = "Cost of VPS Slice Virtuozzo")
  @JsonProperty("vpsSliceVirtuozzoCost")
  @NotNull
  @Valid
  public BigDecimal getVpsSliceVirtuozzoCost() {
    return vpsSliceVirtuozzoCost;
  }
  public void setVpsSliceVirtuozzoCost(BigDecimal vpsSliceVirtuozzoCost) {
    this.vpsSliceVirtuozzoCost = vpsSliceVirtuozzoCost;
  }

  /**
   * Cost of VPS Slice HyperV
   **/
  public VpsOrder vpsSliceHypervCost(BigDecimal vpsSliceHypervCost) {
    this.vpsSliceHypervCost = vpsSliceHypervCost;
    return this;
  }

  
  
  @Schema(example = "10", required = true, description = "Cost of VPS Slice HyperV")
  @JsonProperty("vpsSliceHypervCost")
  @NotNull
  @Valid
  public BigDecimal getVpsSliceHypervCost() {
    return vpsSliceHypervCost;
  }
  public void setVpsSliceHypervCost(BigDecimal vpsSliceHypervCost) {
    this.vpsSliceHypervCost = vpsSliceHypervCost;
  }

  /**
   * Cost of VPS Slice VMware
   **/
  public VpsOrder vpsSliceVmwareCost(BigDecimal vpsSliceVmwareCost) {
    this.vpsSliceVmwareCost = vpsSliceVmwareCost;
    return this;
  }

  
  
  @Schema(example = "10", required = true, description = "Cost of VPS Slice VMware")
  @JsonProperty("vpsSliceVmwareCost")
  @NotNull
  @Valid
  public BigDecimal getVpsSliceVmwareCost() {
    return vpsSliceVmwareCost;
  }
  public void setVpsSliceVmwareCost(BigDecimal vpsSliceVmwareCost) {
    this.vpsSliceVmwareCost = vpsSliceVmwareCost;
  }

  /**
   * Cost of VPS Slice LXC
   **/
  public VpsOrder vpsSliceLxcCost(BigDecimal vpsSliceLxcCost) {
    this.vpsSliceLxcCost = vpsSliceLxcCost;
    return this;
  }

  
  
  @Schema(example = "6", required = true, description = "Cost of VPS Slice LXC")
  @JsonProperty("vpsSliceLxcCost")
  @NotNull
  @Valid
  public BigDecimal getVpsSliceLxcCost() {
    return vpsSliceLxcCost;
  }
  public void setVpsSliceLxcCost(BigDecimal vpsSliceLxcCost) {
    this.vpsSliceLxcCost = vpsSliceLxcCost;
  }

  /**
   * Cost of VPS Slice Xen
   **/
  public VpsOrder vpsSliceXenCost(BigDecimal vpsSliceXenCost) {
    this.vpsSliceXenCost = vpsSliceXenCost;
    return this;
  }

  
  
  @Schema(example = "6", required = true, description = "Cost of VPS Slice Xen")
  @JsonProperty("vpsSliceXenCost")
  @NotNull
  @Valid
  public BigDecimal getVpsSliceXenCost() {
    return vpsSliceXenCost;
  }
  public void setVpsSliceXenCost(BigDecimal vpsSliceXenCost) {
    this.vpsSliceXenCost = vpsSliceXenCost;
  }

  /**
   * Cost of VPS Slice KVM L
   **/
  public VpsOrder vpsSliceKvmLCost(BigDecimal vpsSliceKvmLCost) {
    this.vpsSliceKvmLCost = vpsSliceKvmLCost;
    return this;
  }

  
  
  @Schema(example = "6", required = true, description = "Cost of VPS Slice KVM L")
  @JsonProperty("vpsSliceKvmLCost")
  @NotNull
  @Valid
  public BigDecimal getVpsSliceKvmLCost() {
    return vpsSliceKvmLCost;
  }
  public void setVpsSliceKvmLCost(BigDecimal vpsSliceKvmLCost) {
    this.vpsSliceKvmLCost = vpsSliceKvmLCost;
  }

  /**
   * Cost of VPS Slice KVM Storage
   **/
  public VpsOrder vpsSliceKvmStorageCost(BigDecimal vpsSliceKvmStorageCost) {
    this.vpsSliceKvmStorageCost = vpsSliceKvmStorageCost;
    return this;
  }

  
  
  @Schema(example = "6", required = true, description = "Cost of VPS Slice KVM Storage")
  @JsonProperty("vpsSliceKvmStorageCost")
  @NotNull
  @Valid
  public BigDecimal getVpsSliceKvmStorageCost() {
    return vpsSliceKvmStorageCost;
  }
  public void setVpsSliceKvmStorageCost(BigDecimal vpsSliceKvmStorageCost) {
    this.vpsSliceKvmStorageCost = vpsSliceKvmStorageCost;
  }

  /**
   * Cost of VPS in NY
   **/
  public VpsOrder vpsNyCost(BigDecimal vpsNyCost) {
    this.vpsNyCost = vpsNyCost;
    return this;
  }

  
  
  @Schema(example = "3", required = true, description = "Cost of VPS in NY")
  @JsonProperty("vpsNyCost")
  @NotNull
  @Valid
  public BigDecimal getVpsNyCost() {
    return vpsNyCost;
  }
  public void setVpsNyCost(BigDecimal vpsNyCost) {
    this.vpsNyCost = vpsNyCost;
  }

  /**
   * Cost of VPS Slice KVM Windows
   **/
  public VpsOrder vpsSliceKvmWCost(BigDecimal vpsSliceKvmWCost) {
    this.vpsSliceKvmWCost = vpsSliceKvmWCost;
    return this;
  }

  
  
  @Schema(example = "10", required = true, description = "Cost of VPS Slice KVM Windows")
  @JsonProperty("vpsSliceKvmWCost")
  @NotNull
  @Valid
  public BigDecimal getVpsSliceKvmWCost() {
    return vpsSliceKvmWCost;
  }
  public void setVpsSliceKvmWCost(BigDecimal vpsSliceKvmWCost) {
    this.vpsSliceKvmWCost = vpsSliceKvmWCost;
  }

  /**
   * Cost of cPanel
   **/
  public VpsOrder cpanelCost(BigDecimal cpanelCost) {
    this.cpanelCost = cpanelCost;
    return this;
  }

  
  
  @Schema(example = "22", required = true, description = "Cost of cPanel")
  @JsonProperty("cpanelCost")
  @NotNull
  @Valid
  public BigDecimal getCpanelCost() {
    return cpanelCost;
  }
  public void setCpanelCost(BigDecimal cpanelCost) {
    this.cpanelCost = cpanelCost;
  }

  /**
   * Cost of DirectAdmin (DA)
   **/
  public VpsOrder daCost(BigDecimal daCost) {
    this.daCost = daCost;
    return this;
  }

  
  
  @Schema(example = "8", required = true, description = "Cost of DirectAdmin (DA)")
  @JsonProperty("daCost")
  @NotNull
  @Valid
  public BigDecimal getDaCost() {
    return daCost;
  }
  public void setDaCost(BigDecimal daCost) {
    this.daCost = daCost;
  }

  /**
   * RAM for VPS Slice
   **/
  public VpsOrder ramSlice(String ramSlice) {
    this.ramSlice = ramSlice;
    return this;
  }

  
  
  @Schema(example = "2048", required = true, description = "RAM for VPS Slice")
  @JsonProperty("ramSlice")
  @NotNull
  public String getRamSlice() {
    return ramSlice;
  }
  public void setRamSlice(String ramSlice) {
    this.ramSlice = ramSlice;
  }

  /**
   * Hard Disk for VPS Slice
   **/
  public VpsOrder hdSlice(String hdSlice) {
    this.hdSlice = hdSlice;
    return this;
  }

  
  
  @Schema(example = "30", required = true, description = "Hard Disk for VPS Slice")
  @JsonProperty("hdSlice")
  @NotNull
  public String getHdSlice() {
    return hdSlice;
  }
  public void setHdSlice(String hdSlice) {
    this.hdSlice = hdSlice;
  }

  /**
   * Storage Hard Disk for VPS Slice
   **/
  public VpsOrder hdStorageSlice(String hdStorageSlice) {
    this.hdStorageSlice = hdStorageSlice;
    return this;
  }

  
  
  @Schema(example = "1000", required = true, description = "Storage Hard Disk for VPS Slice")
  @JsonProperty("hdStorageSlice")
  @NotNull
  public String getHdStorageSlice() {
    return hdStorageSlice;
  }
  public void setHdStorageSlice(String hdStorageSlice) {
    this.hdStorageSlice = hdStorageSlice;
  }

  /**
   * Bandwidth for VPS Slice
   **/
  public VpsOrder bwSlice(String bwSlice) {
    this.bwSlice = bwSlice;
    return this;
  }

  
  
  @Schema(example = "2000", required = true, description = "Bandwidth for VPS Slice")
  @JsonProperty("bwSlice")
  @NotNull
  public String getBwSlice() {
    return bwSlice;
  }
  public void setBwSlice(String bwSlice) {
    this.bwSlice = bwSlice;
  }

  /**
   * Bandwidth Type
   **/
  public VpsOrder bwType(String bwType) {
    this.bwType = bwType;
    return this;
  }

  
  
  @Schema(example = "2", required = true, description = "Bandwidth Type")
  @JsonProperty("bwType")
  @NotNull
  public String getBwType() {
    return bwType;
  }
  public void setBwType(String bwType) {
    this.bwType = bwType;
  }

  /**
   * Total Bandwidth
   **/
  public VpsOrder bwTotal(BigDecimal bwTotal) {
    this.bwTotal = bwTotal;
    return this;
  }

  
  
  @Schema(example = "2", required = true, description = "Total Bandwidth")
  @JsonProperty("bwTotal")
  @NotNull
  @Valid
  public BigDecimal getBwTotal() {
    return bwTotal;
  }
  public void setBwTotal(BigDecimal bwTotal) {
    this.bwTotal = bwTotal;
  }

  /**
   * Maximum Slices
   **/
  public VpsOrder maxSlices(String maxSlices) {
    this.maxSlices = maxSlices;
    return this;
  }

  
  
  @Schema(example = "16", required = true, description = "Maximum Slices")
  @JsonProperty("maxSlices")
  @NotNull
  public String getMaxSlices() {
    return maxSlices;
  }
  public void setMaxSlices(String maxSlices) {
    this.maxSlices = maxSlices;
  }

  /**
   **/
  public VpsOrder platformPackages(VpsOrderPlatformPackages platformPackages) {
    this.platformPackages = platformPackages;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("platformPackages")
  @NotNull
  @Valid
  public VpsOrderPlatformPackages getPlatformPackages() {
    return platformPackages;
  }
  public void setPlatformPackages(VpsOrderPlatformPackages platformPackages) {
    this.platformPackages = platformPackages;
  }

  /**
   **/
  public VpsOrder platformNames(VpsOrderPlatformNames platformNames) {
    this.platformNames = platformNames;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("platformNames")
  @NotNull
  @Valid
  public VpsOrderPlatformNames getPlatformNames() {
    return platformNames;
  }
  public void setPlatformNames(VpsOrderPlatformNames platformNames) {
    this.platformNames = platformNames;
  }

  /**
   **/
  public VpsOrder packageCosts(VpsOrderPackageCosts packageCosts) {
    this.packageCosts = packageCosts;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("packageCosts")
  @NotNull
  @Valid
  public VpsOrderPackageCosts getPackageCosts() {
    return packageCosts;
  }
  public void setPackageCosts(VpsOrderPackageCosts packageCosts) {
    this.packageCosts = packageCosts;
  }

  /**
   **/
  public VpsOrder locationStock(VpsOrderLocationStock locationStock) {
    this.locationStock = locationStock;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("locationStock")
  @NotNull
  @Valid
  public VpsOrderLocationStock getLocationStock() {
    return locationStock;
  }
  public void setLocationStock(VpsOrderLocationStock locationStock) {
    this.locationStock = locationStock;
  }

  /**
   **/
  public VpsOrder locationNames(VpsOrderLocationNames locationNames) {
    this.locationNames = locationNames;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("locationNames")
  @NotNull
  @Valid
  public VpsOrderLocationNames getLocationNames() {
    return locationNames;
  }
  public void setLocationNames(VpsOrderLocationNames locationNames) {
    this.locationNames = locationNames;
  }

  /**
   **/
  public VpsOrder osNames(VpsOrderOsNames osNames) {
    this.osNames = osNames;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("osNames")
  @NotNull
  @Valid
  public VpsOrderOsNames getOsNames() {
    return osNames;
  }
  public void setOsNames(VpsOrderOsNames osNames) {
    this.osNames = osNames;
  }

  /**
   **/
  public VpsOrder templates(VpsOrderTemplates templates) {
    this.templates = templates;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("templates")
  @NotNull
  @Valid
  public VpsOrderTemplates getTemplates() {
    return templates;
  }
  public void setTemplates(VpsOrderTemplates templates) {
    this.templates = templates;
  }

  /**
   **/
  public VpsOrder serviceTypes(VpsOrderServiceTypes serviceTypes) {
    this.serviceTypes = serviceTypes;
    return this;
  }

  
  
  @Schema(required = true, description = "")
  @JsonProperty("serviceTypes")
  @NotNull
  @Valid
  public VpsOrderServiceTypes getServiceTypes() {
    return serviceTypes;
  }
  public void setServiceTypes(VpsOrderServiceTypes serviceTypes) {
    this.serviceTypes = serviceTypes;
  }

  /**
   * Currency
   **/
  public VpsOrder currency(String currency) {
    this.currency = currency;
    return this;
  }

  
  
  @Schema(example = "USD", required = true, description = "Currency")
  @JsonProperty("currency")
  @NotNull
  public String getCurrency() {
    return currency;
  }
  public void setCurrency(String currency) {
    this.currency = currency;
  }

  /**
   * Currency Symbol
   **/
  public VpsOrder currencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
    return this;
  }

  
  
  @Schema(example = "$", required = true, description = "Currency Symbol")
  @JsonProperty("currencySymbol")
  @NotNull
  public String getCurrencySymbol() {
    return currencySymbol;
  }
  public void setCurrencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    VpsOrder vpsOrder = (VpsOrder) o;
    return Objects.equals(vpsSliceSsdOvzCost, vpsOrder.vpsSliceSsdOvzCost) &&
        Objects.equals(vpsSliceOvzCost, vpsOrder.vpsSliceOvzCost) &&
        Objects.equals(vpsSliceSsdVirtuozzoCost, vpsOrder.vpsSliceSsdVirtuozzoCost) &&
        Objects.equals(vpsSliceVirtuozzoCost, vpsOrder.vpsSliceVirtuozzoCost) &&
        Objects.equals(vpsSliceHypervCost, vpsOrder.vpsSliceHypervCost) &&
        Objects.equals(vpsSliceVmwareCost, vpsOrder.vpsSliceVmwareCost) &&
        Objects.equals(vpsSliceLxcCost, vpsOrder.vpsSliceLxcCost) &&
        Objects.equals(vpsSliceXenCost, vpsOrder.vpsSliceXenCost) &&
        Objects.equals(vpsSliceKvmLCost, vpsOrder.vpsSliceKvmLCost) &&
        Objects.equals(vpsSliceKvmStorageCost, vpsOrder.vpsSliceKvmStorageCost) &&
        Objects.equals(vpsNyCost, vpsOrder.vpsNyCost) &&
        Objects.equals(vpsSliceKvmWCost, vpsOrder.vpsSliceKvmWCost) &&
        Objects.equals(cpanelCost, vpsOrder.cpanelCost) &&
        Objects.equals(daCost, vpsOrder.daCost) &&
        Objects.equals(ramSlice, vpsOrder.ramSlice) &&
        Objects.equals(hdSlice, vpsOrder.hdSlice) &&
        Objects.equals(hdStorageSlice, vpsOrder.hdStorageSlice) &&
        Objects.equals(bwSlice, vpsOrder.bwSlice) &&
        Objects.equals(bwType, vpsOrder.bwType) &&
        Objects.equals(bwTotal, vpsOrder.bwTotal) &&
        Objects.equals(maxSlices, vpsOrder.maxSlices) &&
        Objects.equals(platformPackages, vpsOrder.platformPackages) &&
        Objects.equals(platformNames, vpsOrder.platformNames) &&
        Objects.equals(packageCosts, vpsOrder.packageCosts) &&
        Objects.equals(locationStock, vpsOrder.locationStock) &&
        Objects.equals(locationNames, vpsOrder.locationNames) &&
        Objects.equals(osNames, vpsOrder.osNames) &&
        Objects.equals(templates, vpsOrder.templates) &&
        Objects.equals(serviceTypes, vpsOrder.serviceTypes) &&
        Objects.equals(currency, vpsOrder.currency) &&
        Objects.equals(currencySymbol, vpsOrder.currencySymbol);
  }

  @Override
  public int hashCode() {
    return Objects.hash(vpsSliceSsdOvzCost, vpsSliceOvzCost, vpsSliceSsdVirtuozzoCost, vpsSliceVirtuozzoCost, vpsSliceHypervCost, vpsSliceVmwareCost, vpsSliceLxcCost, vpsSliceXenCost, vpsSliceKvmLCost, vpsSliceKvmStorageCost, vpsNyCost, vpsSliceKvmWCost, cpanelCost, daCost, ramSlice, hdSlice, hdStorageSlice, bwSlice, bwType, bwTotal, maxSlices, platformPackages, platformNames, packageCosts, locationStock, locationNames, osNames, templates, serviceTypes, currency, currencySymbol);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class VpsOrder {\n");
    
    sb.append("    vpsSliceSsdOvzCost: ").append(toIndentedString(vpsSliceSsdOvzCost)).append("\n");
    sb.append("    vpsSliceOvzCost: ").append(toIndentedString(vpsSliceOvzCost)).append("\n");
    sb.append("    vpsSliceSsdVirtuozzoCost: ").append(toIndentedString(vpsSliceSsdVirtuozzoCost)).append("\n");
    sb.append("    vpsSliceVirtuozzoCost: ").append(toIndentedString(vpsSliceVirtuozzoCost)).append("\n");
    sb.append("    vpsSliceHypervCost: ").append(toIndentedString(vpsSliceHypervCost)).append("\n");
    sb.append("    vpsSliceVmwareCost: ").append(toIndentedString(vpsSliceVmwareCost)).append("\n");
    sb.append("    vpsSliceLxcCost: ").append(toIndentedString(vpsSliceLxcCost)).append("\n");
    sb.append("    vpsSliceXenCost: ").append(toIndentedString(vpsSliceXenCost)).append("\n");
    sb.append("    vpsSliceKvmLCost: ").append(toIndentedString(vpsSliceKvmLCost)).append("\n");
    sb.append("    vpsSliceKvmStorageCost: ").append(toIndentedString(vpsSliceKvmStorageCost)).append("\n");
    sb.append("    vpsNyCost: ").append(toIndentedString(vpsNyCost)).append("\n");
    sb.append("    vpsSliceKvmWCost: ").append(toIndentedString(vpsSliceKvmWCost)).append("\n");
    sb.append("    cpanelCost: ").append(toIndentedString(cpanelCost)).append("\n");
    sb.append("    daCost: ").append(toIndentedString(daCost)).append("\n");
    sb.append("    ramSlice: ").append(toIndentedString(ramSlice)).append("\n");
    sb.append("    hdSlice: ").append(toIndentedString(hdSlice)).append("\n");
    sb.append("    hdStorageSlice: ").append(toIndentedString(hdStorageSlice)).append("\n");
    sb.append("    bwSlice: ").append(toIndentedString(bwSlice)).append("\n");
    sb.append("    bwType: ").append(toIndentedString(bwType)).append("\n");
    sb.append("    bwTotal: ").append(toIndentedString(bwTotal)).append("\n");
    sb.append("    maxSlices: ").append(toIndentedString(maxSlices)).append("\n");
    sb.append("    platformPackages: ").append(toIndentedString(platformPackages)).append("\n");
    sb.append("    platformNames: ").append(toIndentedString(platformNames)).append("\n");
    sb.append("    packageCosts: ").append(toIndentedString(packageCosts)).append("\n");
    sb.append("    locationStock: ").append(toIndentedString(locationStock)).append("\n");
    sb.append("    locationNames: ").append(toIndentedString(locationNames)).append("\n");
    sb.append("    osNames: ").append(toIndentedString(osNames)).append("\n");
    sb.append("    templates: ").append(toIndentedString(templates)).append("\n");
    sb.append("    serviceTypes: ").append(toIndentedString(serviceTypes)).append("\n");
    sb.append("    currency: ").append(toIndentedString(currency)).append("\n");
    sb.append("    currencySymbol: ").append(toIndentedString(currencySymbol)).append("\n");
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
