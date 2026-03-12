(ns inter-server-management-api.specs.account-info-data-cc
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.account-info-max-mind-response :refer :all]
            )
  (:import (java.io File)))


(def account-info-data-cc-data
  {
   (ds/opt :cc) string?
   (ds/opt :cc_exp) string?
   (ds/opt :name) string?
   (ds/opt :address) string?
   (ds/opt :city) string?
   (ds/opt :state) string?
   (ds/opt :zip) string?
   (ds/opt :country) string?
   (ds/opt :maxmind_riskscore) string?
   (ds/opt :maxmind) account-info-max-mind-response-spec
   (ds/opt :verified) boolean?
   })

(def account-info-data-cc-spec
  (ds/spec
    {:name ::account-info-data-cc
     :spec account-info-data-cc-data}))
