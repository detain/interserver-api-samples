(ns inter-server-management-api.specs.account-info-data-extra
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def account-info-data-extra-data
  {
   (ds/opt :private_whois) string?
   })

(def account-info-data-extra-spec
  (ds/spec
    {:name ::account-info-data-extra
     :spec account-info-data-extra-data}))
