(ns inter-server-management-api.specs.mail-block-rspamd
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def mail-block-rspamd-data
  {
   (ds/req :from) string?
   (ds/req :subject) string?
   })

(def mail-block-rspamd-spec
  (ds/spec
    {:name ::mail-block-rspamd
     :spec mail-block-rspamd-data}))
