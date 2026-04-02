#tag Class
Protected Class QuickserverRow

	#tag Property, Flags = &h0
		#tag Note
			The id of the qs.
		#tag EndNote
		qs_id As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The name of the qs.
		#tag EndNote
		qs_name As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The cost of the qs.
		#tag EndNote
		cost As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The hostname of the qs.
		#tag EndNote
		qs_hostname As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The status of the qs.
		#tag EndNote
		qs_status As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The comment of the qs.
		#tag EndNote
		qs_comment As String
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
			Name="qs_id"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="qs_name"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="cost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="qs_hostname"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="qs_status"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="qs_comment"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


