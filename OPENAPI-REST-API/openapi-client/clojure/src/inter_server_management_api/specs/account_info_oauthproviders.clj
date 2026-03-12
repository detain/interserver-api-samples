(ns inter-server-management-api.specs.account-info-oauthproviders
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def account-info-oauthproviders-data
  {
   })

(def account-info-oauthproviders-spec
  (ds/spec
    {:name ::account-info-oauthproviders
     :spec account-info-oauthproviders-data}))
