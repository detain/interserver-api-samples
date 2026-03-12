package io.swagger.model;

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
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Pricing and configuration options for ordering a new VPS, including slice costs by platform and available OS templates.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Pricing and configuration options for ordering a new VPS, including slice costs by platform and available OS templates.")

public class VpsOrder   {

  private @Valid BigDecimal vpsSliceSsdOvzCost = null;

  private @Valid BigDecimal vpsSliceOvzCost = null;

  private @Valid BigDecimal vpsSliceSsdVirtuozzoCost = null;

  private @Valid BigDecimal vpsSliceVirtuozzoCost = null;

  private @Valid BigDecimal vpsSliceHypervCost = null;

  private @Valid BigDecimal vpsSliceVmwareCost = null;

  private @Valid BigDecimal vpsSliceLxcCost = null;

  private @Valid BigDecimal vpsSliceXenCost = null;

  private @Valid BigDecimal vpsSliceKvmLCost = null;

  private @Valid BigDecimal vpsSliceKvmStorageCost = null;

  private @Valid BigDecimal vpsNyCost = null;

  private @Valid BigDecimal vpsSliceKvmWCost = null;

  private @Valid BigDecimal cpanelCost = null;

  private @Valid BigDecimal daCost = null;

  private @Valid String ramSlice = null;

  private @Valid String hdSlice = null;

  private @Valid String hdStorageSlice = null;

  private @Valid String bwSlice = null;

  private @Valid String bwType = null;

  private @Valid BigDecimal bwTotal = null;

  private @Valid String maxSlices = null;

  private @Valid VpsOrderPlatformPackages platformPackages = null;

  private @Valid VpsOrderPlatformNames platformNames = null;

  private @Valid VpsOrderPackageCosts packageCosts = null;

  private @Valid VpsOrderLocationStock locationStock = null;

  private @Valid VpsOrderLocationNames locationNames = null;

  private @Valid VpsOrderOsNames osNames = null;

  private @Valid VpsOrderTemplates templates = null;

  private @Valid VpsOrderServiceTypes serviceTypes = null;

  private @Valid String currency = null;

  private @Valid String currencySymbol = null;

  /**
   * Cost of VPS Slice SSD OVZ
   **/
  public VpsOrder vpsSliceSsdOvzCost(BigDecimal vpsSliceSsdOvzCost) {
    this.vpsSliceSsdOvzCost = vpsSliceSsdOvzCost;
    return this;
  }

  
  @ApiModelProperty(example = "9", required = true, value = "Cost of VPS Slice SSD OVZ")
  @JsonProperty("vpsSliceSsdOvzCost")
  @NotNull

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

  
  @ApiModelProperty(example = "6", required = true, value = "Cost of VPS Slice OVZ")
  @JsonProperty("vpsSliceOvzCost")
  @NotNull

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

  
  @ApiModelProperty(example = "9", required = true, value = "Cost of VPS Slice SSD Virtuozzo")
  @JsonProperty("vpsSliceSsdVirtuozzoCost")
  @NotNull

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

  
  @ApiModelProperty(example = "6", required = true, value = "Cost of VPS Slice Virtuozzo")
  @JsonProperty("vpsSliceVirtuozzoCost")
  @NotNull

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

  
  @ApiModelProperty(example = "10", required = true, value = "Cost of VPS Slice HyperV")
  @JsonProperty("vpsSliceHypervCost")
  @NotNull

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

  
  @ApiModelProperty(example = "10", required = true, value = "Cost of VPS Slice VMware")
  @JsonProperty("vpsSliceVmwareCost")
  @NotNull

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

  
  @ApiModelProperty(example = "6", required = true, value = "Cost of VPS Slice LXC")
  @JsonProperty("vpsSliceLxcCost")
  @NotNull

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

  
  @ApiModelProperty(example = "6", required = true, value = "Cost of VPS Slice Xen")
  @JsonProperty("vpsSliceXenCost")
  @NotNull

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

  
  @ApiModelProperty(example = "6", required = true, value = "Cost of VPS Slice KVM L")
  @JsonProperty("vpsSliceKvmLCost")
  @NotNull

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

  
  @ApiModelProperty(example = "6", required = true, value = "Cost of VPS Slice KVM Storage")
  @JsonProperty("vpsSliceKvmStorageCost")
  @NotNull

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

  
  @ApiModelProperty(example = "3", required = true, value = "Cost of VPS in NY")
  @JsonProperty("vpsNyCost")
  @NotNull

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

  
  @ApiModelProperty(example = "10", required = true, value = "Cost of VPS Slice KVM Windows")
  @JsonProperty("vpsSliceKvmWCost")
  @NotNull

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

  
  @ApiModelProperty(example = "22", required = true, value = "Cost of cPanel")
  @JsonProperty("cpanelCost")
  @NotNull

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

  
  @ApiModelProperty(example = "8", required = true, value = "Cost of DirectAdmin (DA)")
  @JsonProperty("daCost")
  @NotNull

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

  
  @ApiModelProperty(example = "2048", required = true, value = "RAM for VPS Slice")
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

  
  @ApiModelProperty(example = "30", required = true, value = "Hard Disk for VPS Slice")
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

  
  @ApiModelProperty(example = "1000", required = true, value = "Storage Hard Disk for VPS Slice")
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

  
  @ApiModelProperty(example = "2000", required = true, value = "Bandwidth for VPS Slice")
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

  
  @ApiModelProperty(example = "2", required = true, value = "Bandwidth Type")
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

  
  @ApiModelProperty(example = "2", required = true, value = "Total Bandwidth")
  @JsonProperty("bwTotal")
  @NotNull

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

  
  @ApiModelProperty(example = "16", required = true, value = "Maximum Slices")
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

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("platformPackages")
  @NotNull

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

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("platformNames")
  @NotNull

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

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("packageCosts")
  @NotNull

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

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("locationStock")
  @NotNull

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

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("locationNames")
  @NotNull

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

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("osNames")
  @NotNull

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

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("templates")
  @NotNull

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

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("serviceTypes")
  @NotNull

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

  
  @ApiModelProperty(example = "USD", required = true, value = "Currency")
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

  
  @ApiModelProperty(example = "$", required = true, value = "Currency Symbol")
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
