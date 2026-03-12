package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A navigation link for backup service actions in the client portal.
 */
@ApiModel(description="A navigation link for backup service actions in the client portal.")

public class BackupClientLink  {
  
 /**
  * Label of the client link.
  */
  @ApiModelProperty(value = "Label of the client link.")

  private String label;

 /**
  * Link URL of the client link.
  */
  @ApiModelProperty(value = "Link URL of the client link.")

  private String link;

 /**
  * Icon of the client link.
  */
  @ApiModelProperty(value = "Icon of the client link.")

  private String icon;

 /**
  * Icon text of the client link.
  */
  @ApiModelProperty(value = "Icon text of the client link.")

  private String iconText;

 /**
  * Help text of the client link.
  */
  @ApiModelProperty(value = "Help text of the client link.")

  private String helpText;

 /**
  * Other attributes of the client link.
  */
  @ApiModelProperty(value = "Other attributes of the client link.")

  private String otherAttr;
 /**
   * Label of the client link.
   * @return label
  **/
  @JsonProperty("label")
  public String getLabel() {
    return label;
  }

  public void setLabel(String label) {
    this.label = label;
  }

  public BackupClientLink label(String label) {
    this.label = label;
    return this;
  }

 /**
   * Link URL of the client link.
   * @return link
  **/
  @JsonProperty("link")
  public String getLink() {
    return link;
  }

  public void setLink(String link) {
    this.link = link;
  }

  public BackupClientLink link(String link) {
    this.link = link;
    return this;
  }

 /**
   * Icon of the client link.
   * @return icon
  **/
  @JsonProperty("icon")
  public String getIcon() {
    return icon;
  }

  public void setIcon(String icon) {
    this.icon = icon;
  }

  public BackupClientLink icon(String icon) {
    this.icon = icon;
    return this;
  }

 /**
   * Icon text of the client link.
   * @return iconText
  **/
  @JsonProperty("icon_text")
  public String getIconText() {
    return iconText;
  }

  public void setIconText(String iconText) {
    this.iconText = iconText;
  }

  public BackupClientLink iconText(String iconText) {
    this.iconText = iconText;
    return this;
  }

 /**
   * Help text of the client link.
   * @return helpText
  **/
  @JsonProperty("help_text")
  public String getHelpText() {
    return helpText;
  }

  public void setHelpText(String helpText) {
    this.helpText = helpText;
  }

  public BackupClientLink helpText(String helpText) {
    this.helpText = helpText;
    return this;
  }

 /**
   * Other attributes of the client link.
   * @return otherAttr
  **/
  @JsonProperty("other_attr")
  public String getOtherAttr() {
    return otherAttr;
  }

  public void setOtherAttr(String otherAttr) {
    this.otherAttr = otherAttr;
  }

  public BackupClientLink otherAttr(String otherAttr) {
    this.otherAttr = otherAttr;
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
    BackupClientLink backupClientLink = (BackupClientLink) o;
    return Objects.equals(this.label, backupClientLink.label) &&
        Objects.equals(this.link, backupClientLink.link) &&
        Objects.equals(this.icon, backupClientLink.icon) &&
        Objects.equals(this.iconText, backupClientLink.iconText) &&
        Objects.equals(this.helpText, backupClientLink.helpText) &&
        Objects.equals(this.otherAttr, backupClientLink.otherAttr);
  }

  @Override
  public int hashCode() {
    return Objects.hash(label, link, icon, iconText, helpText, otherAttr);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BackupClientLink {\n");
    
    sb.append("    label: ").append(toIndentedString(label)).append("\n");
    sb.append("    link: ").append(toIndentedString(link)).append("\n");
    sb.append("    icon: ").append(toIndentedString(icon)).append("\n");
    sb.append("    iconText: ").append(toIndentedString(iconText)).append("\n");
    sb.append("    helpText: ").append(toIndentedString(helpText)).append("\n");
    sb.append("    otherAttr: ").append(toIndentedString(otherAttr)).append("\n");
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

