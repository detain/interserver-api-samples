(ns inter-server-management-api.specs.get-account-tfa-setup-200-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def get-account-tfa-setup-200-response-data
  {
   (ds/opt :2fa_google_key) string?
   (ds/opt :2fa_google_split) string?
   })

(def get-account-tfa-setup-200-response-spec
  (ds/spec
    {:name ::get-account-tfa-setup-200-response
     :spec get-account-tfa-setup-200-response-data}))
