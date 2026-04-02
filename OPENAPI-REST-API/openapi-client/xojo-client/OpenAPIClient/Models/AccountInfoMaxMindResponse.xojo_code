#tag Class
Protected Class AccountInfoMaxMindResponse

	#tag Property, Flags = &h0
		distance As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		countryMatch As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		countryCode As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		freeMail As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		anonymousProxy As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		score As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		binMatch As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		binCountry As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		err As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		proxyScore As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		ip_region As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		ip_city As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		ip_latitude As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		ip_longitude As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		binName As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		ip_isp As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		ip_org As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		binNameMatch As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		binPhoneMatch As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		binPhone As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		custPhoneInBillingLoc As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		highRiskCountry As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		queriesRemaining As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		cityPostalMatch As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		shipCityPostalMatch As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		maxmindID As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		ip_asnum As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		ip_userType As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		ip_countryConf As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		ip_regionConf As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		ip_cityConf As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		ip_postalCode As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		ip_postalConf As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		ip_accuracyRadius As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		ip_netSpeedCell As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		ip_metroCode As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		ip_areaCode As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		ip_timeZone As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		ip_regionName As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		ip_domain As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		ip_countryName As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		ip_continentCode As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		ip_corporateProxy As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		carderEmail As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		highRiskUsername As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		highRiskPassword As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		riskScore As OpenAPIClient.Models.AccountInfoMaxMindResponseRiskScore
	#tag EndProperty


	#tag Property, Flags = &h0
		isTransProxy As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		prepaid As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		minfraud_version As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		service_level As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		explanation As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		female_name As Xoson.O.OptionalString
	#tag EndProperty





	#tag ViewBehavior
		#tag ViewProperty
			Name="Index"
			Visible=true
			Group="ID"
			InitialValue="-2147483648"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Super"
			Visible=true
			Group="ID"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Left"
			Visible=true
			Group="Position"
			InitialValue="0"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Top"
			Visible=true
			Group="Position"
			InitialValue="0"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="distance"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="countryMatch"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="countryCode"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="freeMail"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="anonymousProxy"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="score"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="binMatch"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="binCountry"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="err"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="proxyScore"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ip_region"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ip_city"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ip_latitude"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ip_longitude"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="binName"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ip_isp"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ip_org"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="binNameMatch"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="binPhoneMatch"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="binPhone"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="custPhoneInBillingLoc"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="highRiskCountry"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="queriesRemaining"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="cityPostalMatch"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="shipCityPostalMatch"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="maxmindID"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ip_asnum"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ip_userType"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ip_countryConf"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ip_regionConf"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ip_cityConf"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ip_postalCode"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ip_postalConf"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ip_accuracyRadius"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ip_netSpeedCell"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ip_metroCode"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ip_areaCode"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ip_timeZone"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ip_regionName"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ip_domain"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ip_countryName"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ip_continentCode"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ip_corporateProxy"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="carderEmail"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="highRiskUsername"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="highRiskPassword"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="riskScore"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="AccountInfoMaxMindResponseRiskScore"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="isTransProxy"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="prepaid"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="minfraud_version"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="service_level"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="explanation"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="female_name"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


