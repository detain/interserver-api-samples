package org.openapitools.model;

import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.openapitools.model.AssetServer;
import org.openapitools.model.ConfigIds;
import org.openapitools.model.ConfigLists;
import org.openapitools.model.Cpu;
import org.openapitools.model.CpuWithDefaults;
import org.openapitools.model.FieldLabel;
import org.openapitools.model.FormValues;
import org.openapitools.model.Region;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Configuration options and pricing data returned when starting a dedicated server order.
 */
@ApiModel(description="Configuration options and pricing data returned when starting a dedicated server order.")

public class ServerOrderGetResponse  {
  
  @ApiModelProperty(required = true, value = "")

  private FormValues formValues;

  @ApiModelProperty(required = true, value = "")

  private ConfigIds configIds;

  @ApiModelProperty(required = true, value = "")

  private Integer cpu;

  @ApiModelProperty(required = true, value = "")

  private Map<String, Cpu> cpuLi = new HashMap<>();

  @ApiModelProperty(required = true, value = "")

  private ConfigLists configLi;

  @ApiModelProperty(required = true, value = "")

  private Integer frequency;

  @ApiModelProperty(required = true, value = "")

  private String currency;

  @ApiModelProperty(required = true, value = "")

  private String country;

  @ApiModelProperty(required = true, value = "")

  private String step;

  @ApiModelProperty(value = "")

  private Map<String, FieldLabel> fieldLabel = new HashMap<>();

  @ApiModelProperty(value = "")

  private Map<String, Map<String, CpuWithDefaults>> cpuCores = new HashMap<>();

  @ApiModelProperty(value = "")

  private String currencySymbol;

  @ApiModelProperty(value = "")

  private Integer custid;

  @ApiModelProperty(value = "")

  private String ima;

  @ApiModelProperty(value = "")

  private List<Region> regions = new ArrayList<>();

  @ApiModelProperty(value = "")

  private List<AssetServer> assetServers = new ArrayList<>();

  @ApiModelProperty(value = "")

  private List<Object> buyItServers = new ArrayList<>();

  @ApiModelProperty(value = "")

  private String displayShowmore;

  @ApiModelProperty(value = "")

  private BigDecimal custDiscount;
 /**
   * Get formValues
   * @return formValues
  **/
  @JsonProperty("form_values")
  public FormValues getFormValues() {
    return formValues;
  }

  public void setFormValues(FormValues formValues) {
    this.formValues = formValues;
  }

  public ServerOrderGetResponse formValues(FormValues formValues) {
    this.formValues = formValues;
    return this;
  }

 /**
   * Get configIds
   * @return configIds
  **/
  @JsonProperty("config_ids")
  public ConfigIds getConfigIds() {
    return configIds;
  }

  public void setConfigIds(ConfigIds configIds) {
    this.configIds = configIds;
  }

  public ServerOrderGetResponse configIds(ConfigIds configIds) {
    this.configIds = configIds;
    return this;
  }

 /**
   * Get cpu
   * @return cpu
  **/
  @JsonProperty("cpu")
  public Integer getCpu() {
    return cpu;
  }

  public void setCpu(Integer cpu) {
    this.cpu = cpu;
  }

  public ServerOrderGetResponse cpu(Integer cpu) {
    this.cpu = cpu;
    return this;
  }

 /**
   * Get cpuLi
   * @return cpuLi
  **/
  @JsonProperty("cpu_li")
  public Map<String, Cpu> getCpuLi() {
    return cpuLi;
  }

  public void setCpuLi(Map<String, Cpu> cpuLi) {
    this.cpuLi = cpuLi;
  }

  public ServerOrderGetResponse cpuLi(Map<String, Cpu> cpuLi) {
    this.cpuLi = cpuLi;
    return this;
  }

  public ServerOrderGetResponse putCpuLiItem(String key, Cpu cpuLiItem) {
    this.cpuLi.put(key, cpuLiItem);
    return this;
  }

 /**
   * Get configLi
   * @return configLi
  **/
  @JsonProperty("config_li")
  public ConfigLists getConfigLi() {
    return configLi;
  }

  public void setConfigLi(ConfigLists configLi) {
    this.configLi = configLi;
  }

  public ServerOrderGetResponse configLi(ConfigLists configLi) {
    this.configLi = configLi;
    return this;
  }

 /**
   * Get frequency
   * @return frequency
  **/
  @JsonProperty("frequency")
  public Integer getFrequency() {
    return frequency;
  }

  public void setFrequency(Integer frequency) {
    this.frequency = frequency;
  }

  public ServerOrderGetResponse frequency(Integer frequency) {
    this.frequency = frequency;
    return this;
  }

 /**
   * Get currency
   * @return currency
  **/
  @JsonProperty("currency")
  public String getCurrency() {
    return currency;
  }

  public void setCurrency(String currency) {
    this.currency = currency;
  }

  public ServerOrderGetResponse currency(String currency) {
    this.currency = currency;
    return this;
  }

 /**
   * Get country
   * @return country
  **/
  @JsonProperty("country")
  public String getCountry() {
    return country;
  }

  public void setCountry(String country) {
    this.country = country;
  }

  public ServerOrderGetResponse country(String country) {
    this.country = country;
    return this;
  }

 /**
   * Get step
   * @return step
  **/
  @JsonProperty("step")
  public String getStep() {
    return step;
  }

  public void setStep(String step) {
    this.step = step;
  }

  public ServerOrderGetResponse step(String step) {
    this.step = step;
    return this;
  }

 /**
   * Get fieldLabel
   * @return fieldLabel
  **/
  @JsonProperty("field_label")
  public Map<String, FieldLabel> getFieldLabel() {
    return fieldLabel;
  }

  public void setFieldLabel(Map<String, FieldLabel> fieldLabel) {
    this.fieldLabel = fieldLabel;
  }

  public ServerOrderGetResponse fieldLabel(Map<String, FieldLabel> fieldLabel) {
    this.fieldLabel = fieldLabel;
    return this;
  }

  public ServerOrderGetResponse putFieldLabelItem(String key, FieldLabel fieldLabelItem) {
    this.fieldLabel.put(key, fieldLabelItem);
    return this;
  }

 /**
   * Get cpuCores
   * @return cpuCores
  **/
  @JsonProperty("cpu_cores")
  public Map<String, Map<String, CpuWithDefaults>> getCpuCores() {
    return cpuCores;
  }

  public void setCpuCores(Map<String, Map<String, CpuWithDefaults>> cpuCores) {
    this.cpuCores = cpuCores;
  }

  public ServerOrderGetResponse cpuCores(Map<String, Map<String, CpuWithDefaults>> cpuCores) {
    this.cpuCores = cpuCores;
    return this;
  }

  public ServerOrderGetResponse putCpuCoresItem(String key, Map<String, CpuWithDefaults> cpuCoresItem) {
    this.cpuCores.put(key, cpuCoresItem);
    return this;
  }

 /**
   * Get currencySymbol
   * @return currencySymbol
  **/
  @JsonProperty("currencySymbol")
  public String getCurrencySymbol() {
    return currencySymbol;
  }

  public void setCurrencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
  }

  public ServerOrderGetResponse currencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
    return this;
  }

 /**
   * Get custid
   * @return custid
  **/
  @JsonProperty("custid")
  public Integer getCustid() {
    return custid;
  }

  public void setCustid(Integer custid) {
    this.custid = custid;
  }

  public ServerOrderGetResponse custid(Integer custid) {
    this.custid = custid;
    return this;
  }

 /**
   * Get ima
   * @return ima
  **/
  @JsonProperty("ima")
  public String getIma() {
    return ima;
  }

  public void setIma(String ima) {
    this.ima = ima;
  }

  public ServerOrderGetResponse ima(String ima) {
    this.ima = ima;
    return this;
  }

 /**
   * Get regions
   * @return regions
  **/
  @JsonProperty("regions")
  public List<Region> getRegions() {
    return regions;
  }

  public void setRegions(List<Region> regions) {
    this.regions = regions;
  }

  public ServerOrderGetResponse regions(List<Region> regions) {
    this.regions = regions;
    return this;
  }

  public ServerOrderGetResponse addRegionsItem(Region regionsItem) {
    this.regions.add(regionsItem);
    return this;
  }

 /**
   * Get assetServers
   * @return assetServers
  **/
  @JsonProperty("asset_servers")
  public List<AssetServer> getAssetServers() {
    return assetServers;
  }

  public void setAssetServers(List<AssetServer> assetServers) {
    this.assetServers = assetServers;
  }

  public ServerOrderGetResponse assetServers(List<AssetServer> assetServers) {
    this.assetServers = assetServers;
    return this;
  }

  public ServerOrderGetResponse addAssetServersItem(AssetServer assetServersItem) {
    this.assetServers.add(assetServersItem);
    return this;
  }

 /**
   * Get buyItServers
   * @return buyItServers
  **/
  @JsonProperty("buy_it_servers")
  public List<Object> getBuyItServers() {
    return buyItServers;
  }

  public void setBuyItServers(List<Object> buyItServers) {
    this.buyItServers = buyItServers;
  }

  public ServerOrderGetResponse buyItServers(List<Object> buyItServers) {
    this.buyItServers = buyItServers;
    return this;
  }

  public ServerOrderGetResponse addBuyItServersItem(Object buyItServersItem) {
    this.buyItServers.add(buyItServersItem);
    return this;
  }

 /**
   * Get displayShowmore
   * @return displayShowmore
  **/
  @JsonProperty("display_showmore")
  public String getDisplayShowmore() {
    return displayShowmore;
  }

  public void setDisplayShowmore(String displayShowmore) {
    this.displayShowmore = displayShowmore;
  }

  public ServerOrderGetResponse displayShowmore(String displayShowmore) {
    this.displayShowmore = displayShowmore;
    return this;
  }

 /**
   * Get custDiscount
   * @return custDiscount
  **/
  @JsonProperty("cust_discount")
  public BigDecimal getCustDiscount() {
    return custDiscount;
  }

  public void setCustDiscount(BigDecimal custDiscount) {
    this.custDiscount = custDiscount;
  }

  public ServerOrderGetResponse custDiscount(BigDecimal custDiscount) {
    this.custDiscount = custDiscount;
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
    ServerOrderGetResponse serverOrderGetResponse = (ServerOrderGetResponse) o;
    return Objects.equals(this.formValues, serverOrderGetResponse.formValues) &&
        Objects.equals(this.configIds, serverOrderGetResponse.configIds) &&
        Objects.equals(this.cpu, serverOrderGetResponse.cpu) &&
        Objects.equals(this.cpuLi, serverOrderGetResponse.cpuLi) &&
        Objects.equals(this.configLi, serverOrderGetResponse.configLi) &&
        Objects.equals(this.frequency, serverOrderGetResponse.frequency) &&
        Objects.equals(this.currency, serverOrderGetResponse.currency) &&
        Objects.equals(this.country, serverOrderGetResponse.country) &&
        Objects.equals(this.step, serverOrderGetResponse.step) &&
        Objects.equals(this.fieldLabel, serverOrderGetResponse.fieldLabel) &&
        Objects.equals(this.cpuCores, serverOrderGetResponse.cpuCores) &&
        Objects.equals(this.currencySymbol, serverOrderGetResponse.currencySymbol) &&
        Objects.equals(this.custid, serverOrderGetResponse.custid) &&
        Objects.equals(this.ima, serverOrderGetResponse.ima) &&
        Objects.equals(this.regions, serverOrderGetResponse.regions) &&
        Objects.equals(this.assetServers, serverOrderGetResponse.assetServers) &&
        Objects.equals(this.buyItServers, serverOrderGetResponse.buyItServers) &&
        Objects.equals(this.displayShowmore, serverOrderGetResponse.displayShowmore) &&
        Objects.equals(this.custDiscount, serverOrderGetResponse.custDiscount);
  }

  @Override
  public int hashCode() {
    return Objects.hash(formValues, configIds, cpu, cpuLi, configLi, frequency, currency, country, step, fieldLabel, cpuCores, currencySymbol, custid, ima, regions, assetServers, buyItServers, displayShowmore, custDiscount);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderGetResponse {\n");
    
    sb.append("    formValues: ").append(toIndentedString(formValues)).append("\n");
    sb.append("    configIds: ").append(toIndentedString(configIds)).append("\n");
    sb.append("    cpu: ").append(toIndentedString(cpu)).append("\n");
    sb.append("    cpuLi: ").append(toIndentedString(cpuLi)).append("\n");
    sb.append("    configLi: ").append(toIndentedString(configLi)).append("\n");
    sb.append("    frequency: ").append(toIndentedString(frequency)).append("\n");
    sb.append("    currency: ").append(toIndentedString(currency)).append("\n");
    sb.append("    country: ").append(toIndentedString(country)).append("\n");
    sb.append("    step: ").append(toIndentedString(step)).append("\n");
    sb.append("    fieldLabel: ").append(toIndentedString(fieldLabel)).append("\n");
    sb.append("    cpuCores: ").append(toIndentedString(cpuCores)).append("\n");
    sb.append("    currencySymbol: ").append(toIndentedString(currencySymbol)).append("\n");
    sb.append("    custid: ").append(toIndentedString(custid)).append("\n");
    sb.append("    ima: ").append(toIndentedString(ima)).append("\n");
    sb.append("    regions: ").append(toIndentedString(regions)).append("\n");
    sb.append("    assetServers: ").append(toIndentedString(assetServers)).append("\n");
    sb.append("    buyItServers: ").append(toIndentedString(buyItServers)).append("\n");
    sb.append("    displayShowmore: ").append(toIndentedString(displayShowmore)).append("\n");
    sb.append("    custDiscount: ").append(toIndentedString(custDiscount)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

