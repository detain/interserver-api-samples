package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A control panel option available when ordering a dedicated server.
 */
@ApiModel(description="A control panel option available when ordering a dedicated server.")

public class ServerOrderControlPanel  {
  
 /**
  * Control Panel ID.
  */
  @ApiModelProperty(example = "9", value = "Control Panel ID.")

  private String id;

 /**
  * Control Panel price.
  */
  @ApiModelProperty(example = "80", value = "Control Panel price.")

  private Integer price;

 /**
  * Control Panel image.
  */
  @ApiModelProperty(example = "cpanel.gif", value = "Control Panel image.")

  private String img;

 /**
  * Short description of the control panel.
  */
  @ApiModelProperty(example = "cPanel ($45+)", value = "Short description of the control panel.")

  private String shortDesc;

 /**
  * Long description of the control panel.
  */
  @ApiModelProperty(value = "Long description of the control panel.")

  private String longDesc;

 /**
  * OS types compatible with the control panel.
  */
  @ApiModelProperty(value = "OS types compatible with the control panel.")

  private String osType;

 /**
  * Monthly price.
  */
  @ApiModelProperty(example = "0", value = "Monthly price.")

  private Integer monthlyPrice;

 /**
  * List of types.
  */
  @ApiModelProperty(example = "[\"1\",\"2\",\"4\",\"5\",\"8\",\"17\",\"23\",\"30\",\"51\"]", value = "List of types.")

  private List<String> types = new ArrayList<>();

 /**
  * Display of control panel price.
  */
  @ApiModelProperty(example = "$80.00", value = "Display of control panel price.")

  private String priceDisplay;

 /**
  * Display of monthly control panel price.
  */
  @ApiModelProperty(example = "$0.00", value = "Display of monthly control panel price.")

  private String monthlyPriceDisplay;
 /**
   * Control Panel ID.
   * @return id
  **/
  @JsonProperty("id")
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public ServerOrderControlPanel id(String id) {
    this.id = id;
    return this;
  }

 /**
   * Control Panel price.
   * @return price
  **/
  @JsonProperty("price")
  public Integer getPrice() {
    return price;
  }

  public void setPrice(Integer price) {
    this.price = price;
  }

  public ServerOrderControlPanel price(Integer price) {
    this.price = price;
    return this;
  }

 /**
   * Control Panel image.
   * @return img
  **/
  @JsonProperty("img")
  public String getImg() {
    return img;
  }

  public void setImg(String img) {
    this.img = img;
  }

  public ServerOrderControlPanel img(String img) {
    this.img = img;
    return this;
  }

 /**
   * Short description of the control panel.
   * @return shortDesc
  **/
  @JsonProperty("short_desc")
  public String getShortDesc() {
    return shortDesc;
  }

  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  public ServerOrderControlPanel shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

 /**
   * Long description of the control panel.
   * @return longDesc
  **/
  @JsonProperty("long_desc")
  public String getLongDesc() {
    return longDesc;
  }

  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  public ServerOrderControlPanel longDesc(String longDesc) {
    this.longDesc = longDesc;
    return this;
  }

 /**
   * OS types compatible with the control panel.
   * @return osType
  **/
  @JsonProperty("os_type")
  public String getOsType() {
    return osType;
  }

  public void setOsType(String osType) {
    this.osType = osType;
  }

  public ServerOrderControlPanel osType(String osType) {
    this.osType = osType;
    return this;
  }

 /**
   * Monthly price.
   * @return monthlyPrice
  **/
  @JsonProperty("monthly_price")
  public Integer getMonthlyPrice() {
    return monthlyPrice;
  }

  public void setMonthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
  }

  public ServerOrderControlPanel monthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
    return this;
  }

 /**
   * List of types.
   * @return types
  **/
  @JsonProperty("types")
  public List<String> getTypes() {
    return types;
  }

  public void setTypes(List<String> types) {
    this.types = types;
  }

  public ServerOrderControlPanel types(List<String> types) {
    this.types = types;
    return this;
  }

  public ServerOrderControlPanel addTypesItem(String typesItem) {
    this.types.add(typesItem);
    return this;
  }

 /**
   * Display of control panel price.
   * @return priceDisplay
  **/
  @JsonProperty("price_display")
  public String getPriceDisplay() {
    return priceDisplay;
  }

  public void setPriceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
  }

  public ServerOrderControlPanel priceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
    return this;
  }

 /**
   * Display of monthly control panel price.
   * @return monthlyPriceDisplay
  **/
  @JsonProperty("monthly_price_display")
  public String getMonthlyPriceDisplay() {
    return monthlyPriceDisplay;
  }

  public void setMonthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
  }

  public ServerOrderControlPanel monthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
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
    ServerOrderControlPanel serverOrderControlPanel = (ServerOrderControlPanel) o;
    return Objects.equals(this.id, serverOrderControlPanel.id) &&
        Objects.equals(this.price, serverOrderControlPanel.price) &&
        Objects.equals(this.img, serverOrderControlPanel.img) &&
        Objects.equals(this.shortDesc, serverOrderControlPanel.shortDesc) &&
        Objects.equals(this.longDesc, serverOrderControlPanel.longDesc) &&
        Objects.equals(this.osType, serverOrderControlPanel.osType) &&
        Objects.equals(this.monthlyPrice, serverOrderControlPanel.monthlyPrice) &&
        Objects.equals(this.types, serverOrderControlPanel.types) &&
        Objects.equals(this.priceDisplay, serverOrderControlPanel.priceDisplay) &&
        Objects.equals(this.monthlyPriceDisplay, serverOrderControlPanel.monthlyPriceDisplay);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, price, img, shortDesc, longDesc, osType, monthlyPrice, types, priceDisplay, monthlyPriceDisplay);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderControlPanel {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    price: ").append(toIndentedString(price)).append("\n");
    sb.append("    img: ").append(toIndentedString(img)).append("\n");
    sb.append("    shortDesc: ").append(toIndentedString(shortDesc)).append("\n");
    sb.append("    longDesc: ").append(toIndentedString(longDesc)).append("\n");
    sb.append("    osType: ").append(toIndentedString(osType)).append("\n");
    sb.append("    monthlyPrice: ").append(toIndentedString(monthlyPrice)).append("\n");
    sb.append("    types: ").append(toIndentedString(types)).append("\n");
    sb.append("    priceDisplay: ").append(toIndentedString(priceDisplay)).append("\n");
    sb.append("    monthlyPriceDisplay: ").append(toIndentedString(monthlyPriceDisplay)).append("\n");
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

