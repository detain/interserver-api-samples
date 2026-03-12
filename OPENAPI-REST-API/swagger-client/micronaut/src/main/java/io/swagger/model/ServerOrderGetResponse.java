package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.AssetServer;
import io.swagger.model.ConfigIds;
import io.swagger.model.ConfigLists;
import io.swagger.model.Cpu;
import io.swagger.model.CpuWithDefaults;
import io.swagger.model.FieldLabel;
import io.swagger.model.FormValues;
import io.swagger.model.Region;
import io.swagger.v3.oas.annotations.media.Schema;
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * Configuration options and pricing data returned when starting a dedicated server order.
 */
@Schema(description = "Configuration options and pricing data returned when starting a dedicated server order.")
@Validated
@Introspected

public class ServerOrderGetResponse   {
  @JsonProperty("form_values")
  private FormValues formValues = null;

  @JsonProperty("config_ids")
  private ConfigIds configIds = null;

  @JsonProperty("cpu")
  private Integer cpu = null;

  @JsonProperty("cpu_li")
  @Valid
  private Map<String, Cpu> cpuLi = new HashMap<String, Cpu>();

  @JsonProperty("config_li")
  private ConfigLists configLi = null;

  @JsonProperty("field_label")
  @Valid
  private Map<String, FieldLabel> fieldLabel = null;

  @JsonProperty("cpu_cores")
  @Valid
  private Map<String, Map<String, CpuWithDefaults>> cpuCores = null;

  @JsonProperty("frequency")
  private Integer frequency = null;

  @JsonProperty("currency")
  private String currency = null;

  @JsonProperty("currencySymbol")
  private String currencySymbol = null;

  @JsonProperty("country")
  private String country = null;

  @JsonProperty("custid")
  private Integer custid = null;

  @JsonProperty("ima")
  private String ima = null;

  @JsonProperty("step")
  private String step = null;

  @JsonProperty("regions")
  @Valid
  private List<Region> regions = null;

  @JsonProperty("asset_servers")
  @Valid
  private List<AssetServer> assetServers = null;

  @JsonProperty("buy_it_servers")
  @Valid
  private List<Object> buyItServers = null;

  @JsonProperty("display_showmore")
  private String displayShowmore = null;

  @JsonProperty("cust_discount")
  private BigDecimal custDiscount = null;

  public ServerOrderGetResponse formValues(FormValues formValues) {
    this.formValues = formValues;
    return this;
  }

  /**
   * Get formValues
   * @return formValues
  **/
  @Schema(required = true, description = "")
  @NotNull

  @Valid
  public FormValues getFormValues() {
    return formValues;
  }

  public void setFormValues(FormValues formValues) {
    this.formValues = formValues;
  }

  public ServerOrderGetResponse configIds(ConfigIds configIds) {
    this.configIds = configIds;
    return this;
  }

  /**
   * Get configIds
   * @return configIds
  **/
  @Schema(required = true, description = "")
  @NotNull

  @Valid
  public ConfigIds getConfigIds() {
    return configIds;
  }

  public void setConfigIds(ConfigIds configIds) {
    this.configIds = configIds;
  }

  public ServerOrderGetResponse cpu(Integer cpu) {
    this.cpu = cpu;
    return this;
  }

  /**
   * Get cpu
   * @return cpu
  **/
  @Schema(required = true, description = "")
  @NotNull

  public Integer getCpu() {
    return cpu;
  }

  public void setCpu(Integer cpu) {
    this.cpu = cpu;
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
   * Get cpuLi
   * @return cpuLi
  **/
  @Schema(required = true, description = "")
  @NotNull
  @Valid
  public Map<String, Cpu> getCpuLi() {
    return cpuLi;
  }

  public void setCpuLi(Map<String, Cpu> cpuLi) {
    this.cpuLi = cpuLi;
  }

  public ServerOrderGetResponse configLi(ConfigLists configLi) {
    this.configLi = configLi;
    return this;
  }

  /**
   * Get configLi
   * @return configLi
  **/
  @Schema(required = true, description = "")
  @NotNull

  @Valid
  public ConfigLists getConfigLi() {
    return configLi;
  }

  public void setConfigLi(ConfigLists configLi) {
    this.configLi = configLi;
  }

  public ServerOrderGetResponse fieldLabel(Map<String, FieldLabel> fieldLabel) {
    this.fieldLabel = fieldLabel;
    return this;
  }

  public ServerOrderGetResponse putFieldLabelItem(String key, FieldLabel fieldLabelItem) {
    if (this.fieldLabel == null) {
      this.fieldLabel = new HashMap<String, FieldLabel>();
    }
    this.fieldLabel.put(key, fieldLabelItem);
    return this;
  }

  /**
   * Get fieldLabel
   * @return fieldLabel
  **/
  @Schema(description = "")
  @NotNull
  @Valid
  public Map<String, FieldLabel> getFieldLabel() {
    return fieldLabel;
  }

  public void setFieldLabel(Map<String, FieldLabel> fieldLabel) {
    this.fieldLabel = fieldLabel;
  }

  public ServerOrderGetResponse cpuCores(Map<String, Map<String, CpuWithDefaults>> cpuCores) {
    this.cpuCores = cpuCores;
    return this;
  }

  public ServerOrderGetResponse putCpuCoresItem(String key, Map<String, CpuWithDefaults> cpuCoresItem) {
    if (this.cpuCores == null) {
      this.cpuCores = new HashMap<String, Map<String, CpuWithDefaults>>();
    }
    this.cpuCores.put(key, cpuCoresItem);
    return this;
  }

  /**
   * Get cpuCores
   * @return cpuCores
  **/
  @Schema(description = "")
  @NotNull
  @Valid
  public Map<String, Map<String, CpuWithDefaults>> getCpuCores() {
    return cpuCores;
  }

  public void setCpuCores(Map<String, Map<String, CpuWithDefaults>> cpuCores) {
    this.cpuCores = cpuCores;
  }

  public ServerOrderGetResponse frequency(Integer frequency) {
    this.frequency = frequency;
    return this;
  }

  /**
   * Get frequency
   * @return frequency
  **/
  @Schema(required = true, description = "")
  @NotNull

  public Integer getFrequency() {
    return frequency;
  }

  public void setFrequency(Integer frequency) {
    this.frequency = frequency;
  }

  public ServerOrderGetResponse currency(String currency) {
    this.currency = currency;
    return this;
  }

  /**
   * Get currency
   * @return currency
  **/
  @Schema(required = true, description = "")
  @NotNull

  public String getCurrency() {
    return currency;
  }

  public void setCurrency(String currency) {
    this.currency = currency;
  }

  public ServerOrderGetResponse currencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
    return this;
  }

  /**
   * Get currencySymbol
   * @return currencySymbol
  **/
  @Schema(description = "")
  @NotNull

  public String getCurrencySymbol() {
    return currencySymbol;
  }

  public void setCurrencySymbol(String currencySymbol) {
    this.currencySymbol = currencySymbol;
  }

  public ServerOrderGetResponse country(String country) {
    this.country = country;
    return this;
  }

  /**
   * Get country
   * @return country
  **/
  @Schema(required = true, description = "")
  @NotNull

  public String getCountry() {
    return country;
  }

  public void setCountry(String country) {
    this.country = country;
  }

  public ServerOrderGetResponse custid(Integer custid) {
    this.custid = custid;
    return this;
  }

  /**
   * Get custid
   * @return custid
  **/
  @Schema(description = "")
  @NotNull

  public Integer getCustid() {
    return custid;
  }

  public void setCustid(Integer custid) {
    this.custid = custid;
  }

  public ServerOrderGetResponse ima(String ima) {
    this.ima = ima;
    return this;
  }

  /**
   * Get ima
   * @return ima
  **/
  @Schema(description = "")
  @NotNull

  public String getIma() {
    return ima;
  }

  public void setIma(String ima) {
    this.ima = ima;
  }

  public ServerOrderGetResponse step(String step) {
    this.step = step;
    return this;
  }

  /**
   * Get step
   * @return step
  **/
  @Schema(required = true, description = "")
  @NotNull

  public String getStep() {
    return step;
  }

  public void setStep(String step) {
    this.step = step;
  }

  public ServerOrderGetResponse regions(List<Region> regions) {
    this.regions = regions;
    return this;
  }

  public ServerOrderGetResponse addRegionsItem(Region regionsItem) {
    if (this.regions == null) {
      this.regions = new ArrayList<Region>();
    }
    this.regions.add(regionsItem);
    return this;
  }

  /**
   * Get regions
   * @return regions
  **/
  @Schema(description = "")
  @NotNull
  @Valid
  public List<Region> getRegions() {
    return regions;
  }

  public void setRegions(List<Region> regions) {
    this.regions = regions;
  }

  public ServerOrderGetResponse assetServers(List<AssetServer> assetServers) {
    this.assetServers = assetServers;
    return this;
  }

  public ServerOrderGetResponse addAssetServersItem(AssetServer assetServersItem) {
    if (this.assetServers == null) {
      this.assetServers = new ArrayList<AssetServer>();
    }
    this.assetServers.add(assetServersItem);
    return this;
  }

  /**
   * Get assetServers
   * @return assetServers
  **/
  @Schema(description = "")
  @NotNull
  @Valid
  public List<AssetServer> getAssetServers() {
    return assetServers;
  }

  public void setAssetServers(List<AssetServer> assetServers) {
    this.assetServers = assetServers;
  }

  public ServerOrderGetResponse buyItServers(List<Object> buyItServers) {
    this.buyItServers = buyItServers;
    return this;
  }

  public ServerOrderGetResponse addBuyItServersItem(Object buyItServersItem) {
    if (this.buyItServers == null) {
      this.buyItServers = new ArrayList<Object>();
    }
    this.buyItServers.add(buyItServersItem);
    return this;
  }

  /**
   * Get buyItServers
   * @return buyItServers
  **/
  @Schema(description = "")
  @NotNull

  public List<Object> getBuyItServers() {
    return buyItServers;
  }

  public void setBuyItServers(List<Object> buyItServers) {
    this.buyItServers = buyItServers;
  }

  public ServerOrderGetResponse displayShowmore(String displayShowmore) {
    this.displayShowmore = displayShowmore;
    return this;
  }

  /**
   * Get displayShowmore
   * @return displayShowmore
  **/
  @Schema(description = "")
  @NotNull

  public String getDisplayShowmore() {
    return displayShowmore;
  }

  public void setDisplayShowmore(String displayShowmore) {
    this.displayShowmore = displayShowmore;
  }

  public ServerOrderGetResponse custDiscount(BigDecimal custDiscount) {
    this.custDiscount = custDiscount;
    return this;
  }

  /**
   * Get custDiscount
   * @return custDiscount
  **/
  @Schema(description = "")
  @NotNull

  @Valid
  public BigDecimal getCustDiscount() {
    return custDiscount;
  }

  public void setCustDiscount(BigDecimal custDiscount) {
    this.custDiscount = custDiscount;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
        Objects.equals(this.fieldLabel, serverOrderGetResponse.fieldLabel) &&
        Objects.equals(this.cpuCores, serverOrderGetResponse.cpuCores) &&
        Objects.equals(this.frequency, serverOrderGetResponse.frequency) &&
        Objects.equals(this.currency, serverOrderGetResponse.currency) &&
        Objects.equals(this.currencySymbol, serverOrderGetResponse.currencySymbol) &&
        Objects.equals(this.country, serverOrderGetResponse.country) &&
        Objects.equals(this.custid, serverOrderGetResponse.custid) &&
        Objects.equals(this.ima, serverOrderGetResponse.ima) &&
        Objects.equals(this.step, serverOrderGetResponse.step) &&
        Objects.equals(this.regions, serverOrderGetResponse.regions) &&
        Objects.equals(this.assetServers, serverOrderGetResponse.assetServers) &&
        Objects.equals(this.buyItServers, serverOrderGetResponse.buyItServers) &&
        Objects.equals(this.displayShowmore, serverOrderGetResponse.displayShowmore) &&
        Objects.equals(this.custDiscount, serverOrderGetResponse.custDiscount);
  }

  @Override
  public int hashCode() {
    return Objects.hash(formValues, configIds, cpu, cpuLi, configLi, fieldLabel, cpuCores, frequency, currency, currencySymbol, country, custid, ima, step, regions, assetServers, buyItServers, displayShowmore, custDiscount);
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
    sb.append("    fieldLabel: ").append(toIndentedString(fieldLabel)).append("\n");
    sb.append("    cpuCores: ").append(toIndentedString(cpuCores)).append("\n");
    sb.append("    frequency: ").append(toIndentedString(frequency)).append("\n");
    sb.append("    currency: ").append(toIndentedString(currency)).append("\n");
    sb.append("    currencySymbol: ").append(toIndentedString(currencySymbol)).append("\n");
    sb.append("    country: ").append(toIndentedString(country)).append("\n");
    sb.append("    custid: ").append(toIndentedString(custid)).append("\n");
    sb.append("    ima: ").append(toIndentedString(ima)).append("\n");
    sb.append("    step: ").append(toIndentedString(step)).append("\n");
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
