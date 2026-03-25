package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Links and labels for domain-related UI actions.
 */
@ApiModel(description="Links and labels for domain-related UI actions.")

public class DomainClientLink  {
  
  @ApiModelProperty(value = "")

  private String label;

  @ApiModelProperty(value = "")

  private String link;

  @ApiModelProperty(value = "")

  private String icon;

  @ApiModelProperty(value = "")

  private String iconText;

  @ApiModelProperty(value = "")

  private String helpText;
 /**
   * Get label
   * @return label
  **/
  @JsonProperty("label")
  public String getLabel() {
    return label;
  }

  public void setLabel(String label) {
    this.label = label;
  }

  public DomainClientLink label(String label) {
    this.label = label;
    return this;
  }

 /**
   * Get link
   * @return link
  **/
  @JsonProperty("link")
  public String getLink() {
    return link;
  }

  public void setLink(String link) {
    this.link = link;
  }

  public DomainClientLink link(String link) {
    this.link = link;
    return this;
  }

 /**
   * Get icon
   * @return icon
  **/
  @JsonProperty("icon")
  public String getIcon() {
    return icon;
  }

  public void setIcon(String icon) {
    this.icon = icon;
  }

  public DomainClientLink icon(String icon) {
    this.icon = icon;
    return this;
  }

 /**
   * Get iconText
   * @return iconText
  **/
  @JsonProperty("icon_text")
  public String getIconText() {
    return iconText;
  }

  public void setIconText(String iconText) {
    this.iconText = iconText;
  }

  public DomainClientLink iconText(String iconText) {
    this.iconText = iconText;
    return this;
  }

 /**
   * Get helpText
   * @return helpText
  **/
  @JsonProperty("help_text")
  public String getHelpText() {
    return helpText;
  }

  public void setHelpText(String helpText) {
    this.helpText = helpText;
  }

  public DomainClientLink helpText(String helpText) {
    this.helpText = helpText;
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
    DomainClientLink domainClientLink = (DomainClientLink) o;
    return Objects.equals(this.label, domainClientLink.label) &&
        Objects.equals(this.link, domainClientLink.link) &&
        Objects.equals(this.icon, domainClientLink.icon) &&
        Objects.equals(this.iconText, domainClientLink.iconText) &&
        Objects.equals(this.helpText, domainClientLink.helpText);
  }

  @Override
  public int hashCode() {
    return Objects.hash(label, link, icon, iconText, helpText);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class DomainClientLink {\n");
    
    sb.append("    label: ").append(toIndentedString(label)).append("\n");
    sb.append("    link: ").append(toIndentedString(link)).append("\n");
    sb.append("    icon: ").append(toIndentedString(icon)).append("\n");
    sb.append("    iconText: ").append(toIndentedString(iconText)).append("\n");
    sb.append("    helpText: ").append(toIndentedString(helpText)).append("\n");
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

