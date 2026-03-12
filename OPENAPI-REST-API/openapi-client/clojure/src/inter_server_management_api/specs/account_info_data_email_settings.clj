(ns inter-server-management-api.specs.account-info-data-email-settings
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def account-info-data-email-settings-data
  {
   (ds/opt :admincc_bad_response) string?
   (ds/opt :adminmass_communicationstpl) string?
   })

(def account-info-data-email-settings-spec
  (ds/spec
    {:name ::account-info-data-email-settings
     :spec account-info-data-email-settings-data}))
