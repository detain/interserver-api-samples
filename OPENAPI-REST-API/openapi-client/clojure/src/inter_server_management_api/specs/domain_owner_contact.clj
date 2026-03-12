(ns inter-server-management-api.specs.domain-owner-contact
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def domain-owner-contact-data
  {
   (ds/opt :postal_code) string?
   (ds/opt :org_name) string?
   (ds/opt :country) string?
   (ds/opt :status) string?
   (ds/opt :state) string?
   (ds/opt :first_name) string?
   (ds/opt :last_name) string?
   (ds/opt :address3) string?
   (ds/opt :fax) string?
   (ds/opt :address2) string?
   (ds/opt :email) string?
   (ds/opt :city) string?
   (ds/opt :phone) string?
   (ds/opt :address1) string?
   })

(def domain-owner-contact-spec
  (ds/spec
    {:name ::domain-owner-contact
     :spec domain-owner-contact-data}))
