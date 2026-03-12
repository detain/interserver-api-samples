(ns inter-server-management-api.specs.update-account-tfa-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def update-account-tfa-request-data
  {
   (ds/req :2fa_google_code) string?
   })

(def update-account-tfa-request-spec
  (ds/spec
    {:name ::update-account-tfa-request
     :spec update-account-tfa-request-data}))
