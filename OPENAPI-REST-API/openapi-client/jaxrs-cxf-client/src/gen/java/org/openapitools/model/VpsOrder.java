package org.openapitools.model;

import java.math.BigDecimal;
import org.openapitools.model.VpsOrderLocationNames;
import org.openapitools.model.VpsOrderLocationStock;
import org.openapitools.model.VpsOrderOsNames;
import org.openapitools.model.VpsOrderPackageCosts;
import org.openapitools.model.VpsOrderPlatformNames;
import org.openapitools.model.VpsOrderPlatformPackages;
import org.openapitools.model.VpsOrderServiceTypes;
import org.openapitools.model.VpsOrderTemplates;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Pricing and configuration options for ordering a new VPS, including slice costs by platform and available OS templates.
 */
@ApiModel(description="Pricing and configuration options for ordering a new VPS, including slice costs by platform and available OS templates.")

public class VpsOrder  {
  
 /**
  * Cost of VPS Slice SSD OVZ
  */
  @ApiModelProperty(example = "9", required = true, value = "Cost of VPS Slice SSD OVZ")

  private BigDecimal vpsSliceSsdOvzCost;

 /**
  * Cost of VPS Slice OVZ
  */
  @ApiModelProperty(example = "6", required = true, value = "Cost of VPS Slice OVZ")

  private BigDecimal vpsSliceOvzCost;

 /**
  * Cost of VPS Slice SSD Virtuozzo
  */
  @ApiModelProperty(example = "9", required = true, value = "Cost of VPS Slice SSD Virtuozzo")

  private BigDecimal vpsSliceSsdVirtuozzoCost;

 /**
  * Cost of VPS Slice Virtuozzo
  */
  @ApiModelProperty(example = "6", required = true, value = "Cost of VPS Slice Virtuozzo")

  private BigDecimal vpsSliceVirtuozzoCost;

 /**
  * Cost of VPS Slice HyperV
  */
  @ApiModelProperty(example = "10", required = true, value = "Cost of VPS Slice HyperV")

  private BigDecimal vpsSliceHypervCost;

 /**
  * Cost of VPS Slice VMware
  */
  @ApiModelProperty(example = "10", required = true, value = "Cost of VPS Slice VMware")

  private BigDecimal vpsSliceVmwareCost;

 /**
  * Cost of VPS Slice LXC
  */
  @ApiModelProperty(example = "6", required = true, value = "Cost of VPS Slice LXC")

  private BigDecimal vpsSliceLxcCost;

 /**
  * Cost of VPS Slice Xen
  */
  @ApiModelProperty(example = "6", required = true, value = "Cost of VPS Slice Xen")

  private BigDecimal vpsSliceXenCost;

 /**
  * Cost of VPS Slice KVM L
  */
  @ApiModelProperty(example = "6", required = true, value = "Cost of VPS Slice KVM L")

  private BigDecimal vpsSliceKvmLCost;

 /**
  * Cost of VPS Slice KVM Storage
  */
  @ApiModelProperty(example = "6", required = true, value = "Cost of VPS Slice KVM Storage")

  private BigDecimal vpsSliceKvmStorageCost;

 /**
  * Cost of VPS in NY
  */
  @ApiModelProperty(example = "3", required = true, value = "Cost of VPS in NY")

  private BigDecimal vpsNyCost;

 /**
  * Cost of VPS Slice KVM Windows
  */
  @ApiModelProperty(example = "10", required = true, value = "Cost of VPS Slice KVM Windows")

  private BigDecimal vpsSliceKvmWCost;

 /**
  * Cost of cPanel
  */
  @ApiModelProperty(example = "22", required = true, value = "Cost of cPanel")

  private BigDecimal cpanelCost;

 /**
  * Cost of DirectAdmin (DA)
  */
  @ApiModelProperty(example = "8", required = true, value = "Cost of DirectAdmin (DA)")

  private BigDecimal daCost;

 /**
  * RAM for VPS Slice
  */
  @ApiModelProperty(example = "2048", required = true, value = "RAM for VPS Slice")

  private String ramSlice;

 /**
  * Hard Disk for VPS Slice
  */
  @ApiModelProperty(example = "30", required = true, value = "Hard Disk for VPS Slice")

  private String hdSlice;

 /**
  * Storage Hard Disk for VPS Slice
  */
  @ApiModelProperty(example = "1000", required = true, value = "Storage Hard Disk for VPS Slice")

  private String hdStorageSlice;

 /**
  * Bandwidth for VPS Slice
  */
  @ApiModelProperty(example = "2000", required = true, value = "Bandwidth for VPS Slice")

  private String bwSlice;

 /**
  * Bandwidth Type
  */
  @ApiModelProperty(example = "2", required = true, value = "Bandwidth Type")

  private String bwType;

 /**
  * Total Bandwidth
  */
  @ApiModelProperty(example = "2", required = true, value = "Total Bandwidth")

  private BigDecimal bwTotal;

 /**
  * Maximum Slices
  */
  @ApiModelProperty(example = "16", required = true, value = "Maximum Slices")

  private String maxSlices;

  @ApiModelProperty(required = true, value = "")

  private VpsOrderPlatformPackages platformPackages;

  @ApiModelProperty(required = true, value = "")

  private VpsOrderPlatformNames platformNames;

  @ApiModelProperty(required = true, value = "")

  private VpsOrderPackageCosts packageCosts;

  @ApiModelProperty(required = true, value = "")

  private VpsOrderLocationStock locationStock;

  @ApiModelProperty(required = true, value = "")

  private VpsOrderLocationNames locationNames;

  @ApiModelProperty(required = true, value = "")

  private VpsOrderOsNames osNames;

  @ApiModelProperty(required = true, value = "")

  private VpsOrderTemplates templates;

  @ApiModelProperty(required = true, value = "")

  private VpsOrderServiceTypes serviceTypes;

 /**
  * Currency
  */
  @ApiModelProperty(example = "USD", required = true, value = "Currency")

  private String currency;

 /**
  * Currency Symbol
  */
  @ApiModelProperty(example = "$", required = true, value = "Currency Symbol")

  private String currencySymbol;
 /**
   * Cost of VPS Slice SSD OVZ
   * @return vpsSliceSsdOvzCost
  **/
  @JsonProperty("vpsSliceSsdOvzCost")
  public BigDecimal getVpsSliceSsdOvzCost() {
    return vpsSliceSsdOvzCost;
  }

  public void setVpsSliceSsdOvzCost(BigDecimal vpsSliceSsdOvzCost) {
    this.vpsSliceSsdOvzCost = vpsSliceSsdOvzCost;
  }

  public VpsOrder vpsSliceSsdOvzCost(BigDecimal vpsSliceSsdOvzCost) {
    this.vpsSliceSsdOvzCost = vpsSliceSsdOvzCost;
    return this;
  }

 /**
   * Cost of VPS Slice OVZ
   * @return vpsSliceOvzCost
  **/
  @JsonProperty("vpsSliceOvzCost")
  public BigDecimal getVpsSliceOvzCost() {
    return vpsSliceOvzCost;
  }

  public void setVpsSliceOvzCost(BigDecimal vpsSliceOvzCost) {
    this.vpsSliceOvzCost = vpsSliceOvzCost;
  }

  public VpsOrder vpsSliceOvzCost(BigDecimal vpsSliceOvzCost) {
    this.vpsSliceOvzCost = vpsSliceOvzCost;
    return this;
  }

 /**
   * Cost of VPS Slice SSD Virtuozzo
   * @return vpsSliceSsdVirtuozzoCost
  **/
  @JsonProperty("vpsSliceSsdVirtuozzoCost")
  public BigDecimal getVpsSliceSsdVirtuozzoCost() {
    return vpsSliceSsdVirtuozzoCost;
  }

  public void setVpsSliceSsdVirtuozzoCost(BigDecimal vpsSliceSsdVirtuozzoCost) {
    this.vpsSliceSsdVirtuozzoCost = vpsSliceSsdVirtuozzoCost;
  }

  public VpsOrder vpsSliceSsdVirtuozzoCost(BigDecimal vpsSliceSsdVirtuozzoCost) {
    this.vpsSliceSsdVirtuozzoCost = vpsSliceSsdVirtuozzoCost;
    return this;
  }

 /**
   * Cost of VPS Slice Virtuozzo
   * @return vpsSliceVirtuozzoCost
  **/
  @JsonProperty("vpsSliceVirtuozzoCost")
  public BigDecimal getVpsSliceVirtuozzoCost() {
    return vpsSliceVirtuozzoCost;
  }

  public void setVpsSliceVirtuozzoCost(BigDecimal vpsSliceVirtuozzoCost) {
    this.vpsSliceVirtuozzoCost = vpsSliceVirtuozzoCost;
  }

  public VpsOrder vpsSliceVirtuozzoCost(BigDecimal vpsSliceVirtuozzoCost) {
    this.vpsSliceVirtuozzoCost = vpsSliceVirtuozzoCost;
    return this;
  }

 /**
   * Cost of VPS Slice HyperV
   * @return vpsSliceHypervCost
  **/
  @JsonProperty("vpsSliceHypervCost")
  public BigDecimal getVpsSliceHypervCost() {
    return vpsSliceHypervCost;
  }

  public void setVpsSliceHypervCost(BigDecimal vpsSliceHypervCost) {
    this.vpsSliceHypervCost = vpsSliceHypervCost;
  }

  public VpsOrder vpsSliceHypervCost(BigDecimal vpsSliceHypervCost) {
    this.vpsSliceHypervCost = vpsSliceHypervCost;
    return this;
  }

 /**
   * Cost of VPS Slice VMware
   * @return vpsSliceVmwareCost
  **/
  @JsonProperty("vpsSliceVmwareCost")
  public BigDecimal getVpsSliceVmwareCost() {
    return vpsSliceVmwareCost;
  }

  public void setVpsSliceVmwareCost(BigDecimal vpsSliceVmwareCost) {
    this.vpsSliceVmwareCost = vpsSliceVmwareCost;
  }

  public VpsOrder vpsSliceVmwareCost(BigDecimal vpsSliceVmwareCost) {
    this.vpsSliceVmwareCost = vpsSliceVmwareCost;
    return this;
  }

 /**
   * Cost of VPS Slice LXC
   * @return vpsSliceLxcCost
  **/
  @JsonProperty("vpsSliceLxcCost")
  public BigDecimal getVpsSliceLxcCost() {
    return vpsSliceLxcCost;
  }

  public void setVpsSliceLxcCost(BigDecimal vpsSliceLxcCost) {
    this.vpsSliceLxcCost = vpsSliceLxcCost;
  }

  public VpsOrder vpsSliceLxcCost(BigDecimal vpsSliceLxcCost) {
    this.vpsSliceLxcCost = vpsSliceLxcCost;
    return this;
  }

 /**
   * Cost of VPS Slice Xen
   * @return vpsSliceXenCost
  **/
  @JsonProperty("vpsSliceXenCost")
  public BigDecimal getVpsSliceXenCost() {
    return vpsSliceXenCost;
  }

  public void setVpsSliceXenCost(BigDecimal vpsSliceXenCost) {
    this.vpsSliceXenCost = vpsSliceXenCost;
  }

  public VpsOrder vpsSliceXenCost(BigDecimal vpsSliceXenCost) {
    this.vpsSliceXenCost = vpsSliceXenCost;
    return this;
  }

 /**
   * Cost of VPS Slice KVM L
   * @return vpsSliceKvmLCost
  **/
  @JsonProperty("vpsSliceKvmLCost")
  public BigDecimal getVpsSliceKvmLCost() {
    return vpsSliceKvmLCost;
  }

  public void setVpsSliceKvmLCost(BigDecimal vpsSliceKvmLCost) {
    this.vpsSliceKvmLCost = vpsSliceKvmLCost;
  }

  public VpsOrder vpsSliceKvmLCost(BigDecimal vpsSliceKvmLCost) {
    this.vpsSliceKvmLCost = vpsSliceKvmLCost;
    return this;
  }

 /**
   * Cost of VPS Slice KVM Storage
   * @return vpsSliceKvmStorageCost
  **/
  @JsonProperty("vpsSliceKvmStorageCost")
  public BigDecimal getVpsSliceKvmStorageCost() {
    return vpsSliceKvmStorageCost;
  }

  public void setVpsSliceKvmStorageCost(BigDecimal vpsSliceKvmStorageCost) {
    this.vpsSliceKvmStorageCost = vpsSliceKvmStorageCost;
  }

  public VpsOrder vpsSliceKvmStorageCost(BigDecimal vpsSliceKvmStorageCost) {
    this.vpsSliceKvmStorageCost = vpsSliceKvmStorageCost;
    return this;
  }

 /**
   * Cost of VPS in NY
   * @return vpsNyCost
  **/
  @JsonProperty("vpsNyCost")
  public BigDecimal getVpsNyCost() {
    return vpsNyCost;
  }

  public void setVpsNyCost(BigDecimal vpsNyCost) {
    this.vpsNyCost = vpsNyCost;
  }

  public VpsOrder vpsNyCost(BigDecimal vpsNyCost) {
    this.vpsNyCost = vpsNyCost;
    return this;
  }

 /**
   * Cost of VPS Slice KVM Windows
   * @return vpsSliceKvmWCost
  **/
  @JsonProperty("vpsSliceKvmWCost")
  public BigDecimal getVpsSliceKvmWCost() {
    return vpsSliceKvmWCost;
  }

  public void setVpsSliceKvmWCost(BigDecimal vpsSliceKvmWCost) {
    this.vpsSliceKvmWCost = vpsSliceKvmWCost;
  }

  public VpsOrder vpsSliceKvmWCost(BigDecimal vpsSliceKvmWCost) {
    this.vpsSliceKvmWCost = vpsSliceKvmWCost;
    return this;
  }

 /**
   * Cost of cPanel
   * @return cpanelCost
  **/
  @JsonProperty("cpanelCost")
  public BigDecimal getCpanelCost() {
    return cpanelCost;
  }

  public void setCpanelCost(BigDecimal cpanelCost) {
    this.cpanelCost = cpanelCost;
  }

  public VpsOrder cpanelCost(BigDecimal cpanelCost) {
    this.cpanelCost = cpanelCost;
    return this;
  }

 /**
   * Cost of DirectAdmin (DA)
   * @return daCost
  **/
  @JsonProperty("daCost")
  public BigDecimal getDaCost() {
    return daCost;
  }

  public void setDaCost(BigDecimal daCost) {
    this.daCost = daCost;
  }

  public VpsOrder daCost(BigDecimal daCost) {
    this.daCost = daCost;
    return this;
  }

 /**
   * RAM for VPS Slice
   * @return ramSlice
  **/
  @JsonProperty("ramSlice")
  public String getRamSlice() {
    return ramSlice;
  }

  public void setRamSlice(String ramSlice) {
    this.ramSlice = ramSlice;
  }

  public VpsOrder ramSlice(String ramSlice) {
    this.ramSlice = ramSlice;
    return this;
  }

 /**
   * Hard Disk for VPS Slice
   * @return hdSlice
  **/
  @JsonProperty("hdSlice")
  public String getHdSlice() {
    return hdSlice;
  }

  public void setHdSlice(String hdSlice) {
    this.hdSlice = hdSlice;
  }

  public VpsOrder hdSlice(String hdSlice) {
    this.hdSlice = hdSlice;
    return this;
  }

 /**
   * Storage Hard Disk for VPS Slice
   * @return hdStorageSlice
  **/
  @JsonProperty("hdStorageSlice")
  public String getHdStorageSlice() {
    return hdStorageSlice;
  }

  public void setHdStorageSlice(String hdStorageSlice) {
    this.hdStorageSlice = hdStorageSlice;
  }

  public VpsOrder hdStorageSlice(String hdStorageSlice) {
    this.hdStorageSlice = hdStorageSlice;
    return this;
  }

 /**
   * Bandwidth for VPS Slice
   * @return bwSlice
  **/
  @JsonProperty("bwSlice")
  public String getBwSlice() {
    return bwSlice;
  }

  public void setBwSlice(String bwSlice) {
    this.bwSlice = bwSlice;
  }

  public VpsOrder bwSlice(String bwSlice) {
    this.bwSlice = bwSlice;
    return this;
  }

 /**
   * Bandwidth Type
   * @return bwType
  **/
  @JsonProperty("bwType")
  public String getBwType() {
    return bwType;
  }

  public void setBwType(String bwType) {
    this.bwType = bwType;
  }

  public VpsOrder bwType(String bwType) {
    this.bwType = bwType;
    return this;
  }

 /**
   * Total Bandwidth
   * @return bwTotal
  **/
  @JsonProperty("bwTotal")
  public BigDecimal getBwTotal() {
    return bwTotal;
  }

  public void setBwTotal(BigDecimal bwTotal) {
    this.bwTotal = bwTotal;
  }

  public VpsOrder bwTotal(BigDecimal bwTotal) {
    this.bwTotal = bwTotal;
    return this;
  }

 /**
   * Maximum Slices
   * @return maxSlices
  **/
  @JsonProperty("maxSlices")
  public String getMaxSlices() {
    return maxSlices;
  }

  public void setMaxSlices(String maxSlices) {
    this.maxSlices = maxSlices;
  }

  public VpsOrder maxSlices(String maxSlices) {
    this.maxSlices = maxSlices;
    return this;
  }

 /**
   * Get platformPackages
   * @return platformPackages
  **/
  @JsonProperty("platformPackages")
  public VpsOrderPlatformPackages getPlatformPackages() {
    return platformPackages;
  }

  public void setPlatformPackages(VpsOrderPlatformPackages platformPackages) {
    this.platformPackages = platformPackages;
  }

  public VpsOrder platformPackages(VpsOrderPlatformPackages platformPackages) {
    this.platformPackages = platformPackages;
    return this;
  }

 /**
   * Get platformNames
   * @return platformNames
  **/
  @JsonProperty("platformNames")
  public VpsOrderPlatformNames getPlatformNames() {
    return platformNames;
  }

  public void setPlatformNames(VpsOrderPlatformNames platformNames) {
    this.platformNames = platformNames;
  }

  public VpsOrder platformNames(VpsOrderPlatformNames platformNames) {
    this.platformNames = platformNames;
    return this;
  }

 /**
   * Get packageCosts
   * @return packageCosts
  **/
  @JsonProperty("packageCosts")
  public VpsOrderPackageCosts getPackageCosts() {
    return packageCosts;
  }

  public void setPackageCosts(VpsOrderPackageCosts packageCosts) {
    this.packageCosts = packageCosts;
  }

  public VpsOrder packageCosts(VpsOrderPackageCosts packageCosts) {
    this.packageCosts = packageCosts;
    return this;
  }

 /**
   * Get locationStock
   * @return locationStock
  **/
  @JsonProperty("locationStock")
  public VpsOrderLocationStock getLocationStock() {
    return locationStock;
  }

  public void setLocationStock(VpsOrderLocationStock locationStock) {
    this.locationStock = locationStock;
  }

  public VpsOrder locationStock(VpsOrderLocationStock locationStock) {
    this.locationStock = locationStock;
    return this;
  }

 /**
   * Get locationNames
   * @return locationNames
  **/
  @JsonProperty("locationNames")
  public VpsOrderLocationNames getLocationNames() {
    return locationNames;
  }

  public void setLocationNames(VpsOrderLocationNames locationNames) {
    this.locationNames = locationNames;
  }

  public VpsOrder locationNames(VpsOrderLocationNames locationNames) {
    this.locationNames = locationNames;
    return this;
  }

 /**
   * Get osNames
   * @return osNames
  **/
  @JsonProperty("osNames")
  public VpsOrderOsNames getOsNames() {
    return osNames;
  }

  public void setOsNames(VpsOrderOsNames osNames) {
    this.osNames = osNames;
  }

  public VpsOrder osNames(VpsOrderOsNames osNames) {
    this.osNames = osNames;
    return this;
  }

 /**
   * Get templates
   * @return templates
  **/
  @JsonProperty("templates")
  public VpsOrderTemplates getTemplates() {
    return templates;
  }

  public void setTemplates(VpsOrderTemplates templates) {
    this.templates = templates;
  }

  public VpsOrder templates(VpsOrderTemplates templates) {
    this.templates = templates;
    return this;
  }

 /**
   * Get serviceTypes
   * @return serviceTypes
  **/
  @JsonProperty("serviceTypes")
  public VpsOrderServiceTypes getServiceTypes() {
    return serviceTypes;
  }

  public void setServiceTypes(VpsOrderServiceTypes serviceTypes) {
    this.serviceTypes = serviceTypes;
  }

  public VpsOrder serviceTypes(VpsOrderServiceTypes serviceTypes) {
    this.serviceTypes = serviceTypes;
    return this;
  }

 /**
   * Currency
   * @return currency
  **/
  @JsonProperty("currency")
  public String getCurrency() {
    return currency;
  }

  public void setCurrency(String currency) {
    this.currency = currency;
  }

  public VpsOrder currency(String currency) {
    this.currency = currency;
    return this;
  }

 /**
   * Currency Symbol
   * @return currencySymbol
  **/
  @JsonProperty("currencySymbol")
  public String getCurrencySymbol() {
    return currencySymbol;
  }

  public void setCurrencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
  }

  public VpsOrder currencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
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
    VpsOrder vpsOrder = (VpsOrder) o;
    return Objects.equals(this.vpsSliceSsdOvzCost, vpsOrder.vpsSliceSsdOvzCost) &&
        Objects.equals(this.vpsSliceOvzCost, vpsOrder.vpsSliceOvzCost) &&
        Objects.equals(this.vpsSliceSsdVirtuozzoCost, vpsOrder.vpsSliceSsdVirtuozzoCost) &&
        Objects.equals(this.vpsSliceVirtuozzoCost, vpsOrder.vpsSliceVirtuozzoCost) &&
        Objects.equals(this.vpsSliceHypervCost, vpsOrder.vpsSliceHypervCost) &&
        Objects.equals(this.vpsSliceVmwareCost, vpsOrder.vpsSliceVmwareCost) &&
        Objects.equals(this.vpsSliceLxcCost, vpsOrder.vpsSliceLxcCost) &&
        Objects.equals(this.vpsSliceXenCost, vpsOrder.vpsSliceXenCost) &&
        Objects.equals(this.vpsSliceKvmLCost, vpsOrder.vpsSliceKvmLCost) &&
        Objects.equals(this.vpsSliceKvmStorageCost, vpsOrder.vpsSliceKvmStorageCost) &&
        Objects.equals(this.vpsNyCost, vpsOrder.vpsNyCost) &&
        Objects.equals(this.vpsSliceKvmWCost, vpsOrder.vpsSliceKvmWCost) &&
        Objects.equals(this.cpanelCost, vpsOrder.cpanelCost) &&
        Objects.equals(this.daCost, vpsOrder.daCost) &&
        Objects.equals(this.ramSlice, vpsOrder.ramSlice) &&
        Objects.equals(this.hdSlice, vpsOrder.hdSlice) &&
        Objects.equals(this.hdStorageSlice, vpsOrder.hdStorageSlice) &&
        Objects.equals(this.bwSlice, vpsOrder.bwSlice) &&
        Objects.equals(this.bwType, vpsOrder.bwType) &&
        Objects.equals(this.bwTotal, vpsOrder.bwTotal) &&
        Objects.equals(this.maxSlices, vpsOrder.maxSlices) &&
        Objects.equals(this.platformPackages, vpsOrder.platformPackages) &&
        Objects.equals(this.platformNames, vpsOrder.platformNames) &&
        Objects.equals(this.packageCosts, vpsOrder.packageCosts) &&
        Objects.equals(this.locationStock, vpsOrder.locationStock) &&
        Objects.equals(this.locationNames, vpsOrder.locationNames) &&
        Objects.equals(this.osNames, vpsOrder.osNames) &&
        Objects.equals(this.templates, vpsOrder.templates) &&
        Objects.equals(this.serviceTypes, vpsOrder.serviceTypes) &&
        Objects.equals(this.currency, vpsOrder.currency) &&
        Objects.equals(this.currencySymbol, vpsOrder.currencySymbol);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

